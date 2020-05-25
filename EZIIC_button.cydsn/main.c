/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "string.h"
#include "stdio.h"



/* button event */
#define NOT_TOUCH		 0
#define VOL_UP        	 1
#define VOL_DOWN         2
#define FORMATION     	 4
#define PLAY_PAUSE    	 8


#define SW_FRONT_PROXIMITY		 0x0b
#define KEY_VOLUMEUP      	   	 115
#define KEY_VOLUMEDOWN        	 114
#define KEY_PLAYPAUSE            164
#define KEY_HOME     	         102


/* rel */
/*
#define SW_FRONT_PROXIMITY		 0x0b
#define KEY_VOLUMEUP      	   	 1
#define KEY_VOLUMEDOWN        	 2
#define KEY_PLAYPAUSE            3
#define KEY_HOME     	         4
*/


#define SCAN_TIME_MS  10

#define RUN_UART_TUNER  1

#if RUN_UART_TUNER
    /* Packet header and tail information */
    static const uint8 header[]  = {0x0Du, 0x0Au};
    static const uint8 tail[]    = {0x00u, 0xFFu, 0xFFu};
#endif

// I2C COMMAND
#define REG15_UPDATE_MCU_CMD  0x36

typedef union
{
    struct{
        uint8_t reserve_reg[15]; // 0~14
        uint8_t updat_posc;      // register 15
    }reg;
    uint8_t reg_array[16];
} RW_I2C_REG;

// I2C registers
// R : Read only, R/W : Read and Write
typedef struct 
{                               
                             // reg number    | access right |      comment
    RW_I2C_REG  rw;          //    0 ~ 15     |    R/W       |   reserved R/W
    uint8  button_stat;      //    16         |    R         |   status of button 0 ~ 7 
    uint8  button_value;
  
}__attribute__ ((packed)) I2C_REG;

/* EZI2C buffer */
I2C_REG i2c;
#define EZI2C_RW_SIZE     (sizeof(i2c.rw))
#define EZI2C_SIZE        (sizeof(i2c))

uint8 capsense_status = 0;
uint8 send_status = 0;
uint8 time_counts = 0;
uint8 last_capsense = 0;
uint temp = 0;

uint8 key_buf[CapSense_TOTAL_WIDGETS] = {KEY_VOLUMEUP, KEY_VOLUMEDOWN, KEY_PLAYPAUSE, KEY_HOME};


#define UART_DEBUG 0

#if UART_DEBUG
char uartString[1024u] = {' '};
#endif

static void Init_I2C_Communication()
{
    // Zero ezi2cBuffer buffer
    memset((void*)&i2c,0x00,EZI2C_SIZE);
    EZI2C_Start(); // Start I2C (Address : 0x08 , Data Rate : 100k ) 
    /* EZI2C buffer parameters: 
    *  EZI2C_SIZE - is thesize of the memory exposed to the I2C interface.
    *  EZI2C_RW_SIZE - sets the boundary between the read/write and read only areas.
    *                  The read/write area is first, followed by the read only area.
    *  (void *)ezi2cBuffer - is the pointer to the memory exposed to the I2C interface. */
    EZI2C_EzI2CSetBuffer1(EZI2C_SIZE, EZI2C_RW_SIZE , (void *)&i2c);
}

void key_event(void){
    
    capsense_status = (uint8_t)  CapSense_IsAnyWidgetActive();
    if(last_capsense != capsense_status){    
        switch(capsense_status ^ last_capsense){
            case VOL_UP:
                i2c.button_stat = KEY_VOLUMEUP;
                i2c.button_value = CapSense_dsRam.snsStatus[0];         
                time_counts = 0;
                CAP_INT_Write(!CAP_INT_Read());
                break;
            case VOL_DOWN:
                i2c.button_stat = KEY_VOLUMEDOWN;
                i2c.button_value = CapSense_dsRam.snsStatus[1];
                time_counts = 0; 
                CAP_INT_Write(!CAP_INT_Read());
                break;
            case FORMATION:
                i2c.button_stat = KEY_HOME;
                time_counts = 0;
                i2c.button_value = CapSense_dsRam.snsStatus[2];
                CAP_INT_Write(!CAP_INT_Read());
                break;
            case PLAY_PAUSE:
                i2c.button_stat = KEY_PLAYPAUSE;
                i2c.button_value = CapSense_dsRam.snsStatus[3];
                time_counts = 0;
                CAP_INT_Write(!CAP_INT_Read());
                break;
            default:
                temp = capsense_status;
                for(int i = 0; i < 4; i++){
                    if(temp & 0x01){
                        i2c.button_stat = key_buf[i];
                        i2c.button_value = 0;
                        CAP_INT_Write(!CAP_INT_Read());
#if UART_DEBUG                          
                        sprintf(uartString,".---- %d %d \r\n\n",
                        i2c.button_stat, i2c.button_value);
                        UART_UartPutString(uartString);
#endif                         
                    }
                    temp = temp >> 1;
                }
                break;
        }
#if UART_DEBUG           
            sprintf(uartString,".%d %d %d\r\n\n",
                        capsense_status ^ last_capsense, i2c.button_stat, i2c.button_value);
            UART_UartPutString(uartString);
#endif     
    }
    last_capsense = capsense_status;
}


void ProcessI2CCommand()
{
    if (REG15_UPDATE_MCU_CMD == i2c.rw.reg.updat_posc)
    {
        /*
        Schedules the Bootloader/Launcher to be launched and then performs a software reset to 
        launch it.
        Returns:
        This method will never return. It will load a new application and reset the device.
        */
        // Bootloadable_Load();
    }
}

/***************************************************************************//**
* Function Name: ISR_Timer
********************************************************************************
*
* Summary:
* This function handles the Interrupt Service Routine for TCPWM Timer.
* This ISR
*   1. Clears the terminal count interrupt on Timer.
*   2. Changes the LED state. Toggling ON and OFF.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
CY_ISR(TC_InterruptHandler)
{
    /* Clears the Timer terminal count interrupt */
    Timer_ClearInterrupt(Timer_INTR_MASK_TC);
    
    /* Toggles the LED state */
    time_counts ++;
}


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    /* Starts the timer */
    Timer_Start();
    
    UART_Start();
    Init_I2C_Communication();
    
    /* Start CapSense Component */
    CapSense_Start();
#if RUN_UART_TUNER    
    CapSense_TuInitialize();
#endif    

    CapSense_InitializeAllBaselines();
    /* Start initial scan */
    CapSense_ScanAllWidgets();
    
    /* Enable interrupt component and set up handler */
    TC_Interrupt_StartEx(TC_InterruptHandler);
    
    for(;;)
    {

        /* Do this only when a scan is done */
        if(CapSense_NOT_BUSY == CapSense_IsBusy())
        {
            /* Process all widgets */
            CapSense_ProcessAllWidgets();
            
#if  RUN_UART_TUNER           
            /* To sync with Tuner application */
            CapSense_RunTuner();
            
             /* Send packet header */
            UART_SpiUartPutArray((uint8 *)(&header), sizeof(header));
            /* Send packet with CapSense data */
            UART_SpiUartPutArray((uint8 *)(&CapSense_dsRam), sizeof(CapSense_dsRam));
            /* Send packet tail */
            UART_SpiUartPutArray((uint8 *)(&tail), sizeof(tail));
#endif            
            /* process capsnese event and host interrupt */
            //ProcessCapsenseEvent();
            
            //ProcessCapsenseEvent_1_1();            
            
            key_event();
            
            /* Start next scan */
            CapSense_ScanAllWidgets();
        }
        ProcessI2CCommand();
        
        CyDelay(SCAN_TIME_MS);
    }
}

/* [] END OF FILE */
