/*******************************************************************************
* File Name: FOR_pin.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_FOR_pin_ALIASES_H) /* Pins FOR_pin_ALIASES_H */
#define CY_PINS_FOR_pin_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define FOR_pin_0			(FOR_pin__0__PC)
#define FOR_pin_0_PS		(FOR_pin__0__PS)
#define FOR_pin_0_PC		(FOR_pin__0__PC)
#define FOR_pin_0_DR		(FOR_pin__0__DR)
#define FOR_pin_0_SHIFT	(FOR_pin__0__SHIFT)
#define FOR_pin_0_INTR	((uint16)((uint16)0x0003u << (FOR_pin__0__SHIFT*2u)))

#define FOR_pin_INTR_ALL	 ((uint16)(FOR_pin_0_INTR))


#endif /* End Pins FOR_pin_ALIASES_H */


/* [] END OF FILE */
