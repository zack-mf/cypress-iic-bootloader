/*******************************************************************************
* File Name: BINT.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_BINT_H) /* Pins BINT_H */
#define CY_PINS_BINT_H

#include "cytypes.h"
#include "cyfitter.h"
#include "BINT_aliases.h"


/***************************************
*     Data Struct Definitions
***************************************/

/**
* \addtogroup group_structures
* @{
*/
    
/* Structure for sleep mode support */
typedef struct
{
    uint32 pcState; /**< State of the port control register */
    uint32 sioState; /**< State of the SIO configuration */
    uint32 usbState; /**< State of the USBIO regulator */
} BINT_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   BINT_Read(void);
void    BINT_Write(uint8 value);
uint8   BINT_ReadDataReg(void);
#if defined(BINT__PC) || (CY_PSOC4_4200L) 
    void    BINT_SetDriveMode(uint8 mode);
#endif
void    BINT_SetInterruptMode(uint16 position, uint16 mode);
uint8   BINT_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void BINT_Sleep(void); 
void BINT_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(BINT__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define BINT_DRIVE_MODE_BITS        (3)
    #define BINT_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - BINT_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the BINT_SetDriveMode() function.
         *  @{
         */
        #define BINT_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define BINT_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define BINT_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define BINT_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define BINT_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define BINT_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define BINT_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define BINT_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define BINT_MASK               BINT__MASK
#define BINT_SHIFT              BINT__SHIFT
#define BINT_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in BINT_SetInterruptMode() function.
     *  @{
     */
        #define BINT_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define BINT_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define BINT_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define BINT_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(BINT__SIO)
    #define BINT_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(BINT__PC) && (CY_PSOC4_4200L)
    #define BINT_USBIO_ENABLE               ((uint32)0x80000000u)
    #define BINT_USBIO_DISABLE              ((uint32)(~BINT_USBIO_ENABLE))
    #define BINT_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define BINT_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define BINT_USBIO_ENTER_SLEEP          ((uint32)((1u << BINT_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << BINT_USBIO_SUSPEND_DEL_SHIFT)))
    #define BINT_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << BINT_USBIO_SUSPEND_SHIFT)))
    #define BINT_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << BINT_USBIO_SUSPEND_DEL_SHIFT)))
    #define BINT_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(BINT__PC)
    /* Port Configuration */
    #define BINT_PC                 (* (reg32 *) BINT__PC)
#endif
/* Pin State */
#define BINT_PS                     (* (reg32 *) BINT__PS)
/* Data Register */
#define BINT_DR                     (* (reg32 *) BINT__DR)
/* Input Buffer Disable Override */
#define BINT_INP_DIS                (* (reg32 *) BINT__PC2)

/* Interrupt configuration Registers */
#define BINT_INTCFG                 (* (reg32 *) BINT__INTCFG)
#define BINT_INTSTAT                (* (reg32 *) BINT__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define BINT_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(BINT__SIO)
    #define BINT_SIO_REG            (* (reg32 *) BINT__SIO)
#endif /* (BINT__SIO_CFG) */

/* USBIO registers */
#if !defined(BINT__PC) && (CY_PSOC4_4200L)
    #define BINT_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define BINT_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define BINT_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define BINT_DRIVE_MODE_SHIFT       (0x00u)
#define BINT_DRIVE_MODE_MASK        (0x07u << BINT_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins BINT_H */


/* [] END OF FILE */
