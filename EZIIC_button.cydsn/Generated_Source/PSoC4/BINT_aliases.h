/*******************************************************************************
* File Name: BINT.h  
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

#if !defined(CY_PINS_BINT_ALIASES_H) /* Pins BINT_ALIASES_H */
#define CY_PINS_BINT_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define BINT_0			(BINT__0__PC)
#define BINT_0_PS		(BINT__0__PS)
#define BINT_0_PC		(BINT__0__PC)
#define BINT_0_DR		(BINT__0__DR)
#define BINT_0_SHIFT	(BINT__0__SHIFT)
#define BINT_0_INTR	((uint16)((uint16)0x0003u << (BINT__0__SHIFT*2u)))

#define BINT_INTR_ALL	 ((uint16)(BINT_0_INTR))


#endif /* End Pins BINT_ALIASES_H */


/* [] END OF FILE */
