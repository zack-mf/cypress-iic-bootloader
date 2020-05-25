/*******************************************************************************
* File Name: V_pin.h  
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

#if !defined(CY_PINS_V_pin_ALIASES_H) /* Pins V_pin_ALIASES_H */
#define CY_PINS_V_pin_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define V_pin_0			(V_pin__0__PC)
#define V_pin_0_PS		(V_pin__0__PS)
#define V_pin_0_PC		(V_pin__0__PC)
#define V_pin_0_DR		(V_pin__0__DR)
#define V_pin_0_SHIFT	(V_pin__0__SHIFT)
#define V_pin_0_INTR	((uint16)((uint16)0x0003u << (V_pin__0__SHIFT*2u)))

#define V_pin_INTR_ALL	 ((uint16)(V_pin_0_INTR))


#endif /* End Pins V_pin_ALIASES_H */


/* [] END OF FILE */
