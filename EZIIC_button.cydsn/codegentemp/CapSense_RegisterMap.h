/***************************************************************************//**
* \file CapSense_RegisterMap.h
* \version 7.0
*
* \brief
*   This file provides the definitions for the Component data structure register.
*
* \see CapSense v7.0 Datasheet
*
*//*****************************************************************************
* Copyright (2016-2019), Cypress Semiconductor Corporation.
********************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress) and is
* protected by and subject to worldwide patent protection (United States and
* foreign), United States copyright laws and international treaty provisions.
* Cypress hereby grants to licensee a personal, non-exclusive, non-transferable
* license to copy, use, modify, create derivative works of, and compile the
* Cypress Source Code and derivative works for the sole purpose of creating
* custom software in support of licensee product to be used only in conjunction
* with a Cypress integrated circuit as specified in the applicable agreement.
* Any reproduction, modification, translation, compilation, or representation of
* this software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the
* materials described herein. Cypress does not assume any liability arising out
* of the application or use of any product or circuit described herein. Cypress
* does not authorize its products for use as critical components in life-support
* systems where a malfunction or failure may reasonably be expected to result in
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of
* such use and in doing so indemnifies Cypress against all charges. Use may be
* limited by and subject to the applicable Cypress software license agreement.
*******************************************************************************/

#if !defined(CY_SENSE_CapSense_REGISTER_MAP_H)
#define CY_SENSE_CapSense_REGISTER_MAP_H

#include <cytypes.h>
#include "CapSense_Configuration.h"
#include "CapSense_Structure.h"

/*****************************************************************************/
/* RAM Data structure register definitions                                   */
/*****************************************************************************/
#define CapSense_CONFIG_ID_VALUE                            (CapSense_dsRam.configId)
#define CapSense_CONFIG_ID_OFFSET                           (0u)
#define CapSense_CONFIG_ID_SIZE                             (2u)
#define CapSense_CONFIG_ID_PARAM_ID                         (0x87000000u)

#define CapSense_DEVICE_ID_VALUE                            (CapSense_dsRam.deviceId)
#define CapSense_DEVICE_ID_OFFSET                           (2u)
#define CapSense_DEVICE_ID_SIZE                             (2u)
#define CapSense_DEVICE_ID_PARAM_ID                         (0x8B000002u)

#define CapSense_HW_CLOCK_VALUE                             (CapSense_dsRam.hwClock)
#define CapSense_HW_CLOCK_OFFSET                            (4u)
#define CapSense_HW_CLOCK_SIZE                              (2u)
#define CapSense_HW_CLOCK_PARAM_ID                          (0x86000004u)

#define CapSense_TUNER_CMD_VALUE                            (CapSense_dsRam.tunerCmd)
#define CapSense_TUNER_CMD_OFFSET                           (6u)
#define CapSense_TUNER_CMD_SIZE                             (2u)
#define CapSense_TUNER_CMD_PARAM_ID                         (0xA1000006u)

#define CapSense_SCAN_COUNTER_VALUE                         (CapSense_dsRam.scanCounter)
#define CapSense_SCAN_COUNTER_OFFSET                        (8u)
#define CapSense_SCAN_COUNTER_SIZE                          (2u)
#define CapSense_SCAN_COUNTER_PARAM_ID                      (0x85000008u)

#define CapSense_STATUS_VALUE                               (CapSense_dsRam.status)
#define CapSense_STATUS_OFFSET                              (12u)
#define CapSense_STATUS_SIZE                                (4u)
#define CapSense_STATUS_PARAM_ID                            (0xCB00000Cu)

#define CapSense_WDGT_ENABLE0_VALUE                         (CapSense_dsRam.wdgtEnable[0u])
#define CapSense_WDGT_ENABLE0_OFFSET                        (16u)
#define CapSense_WDGT_ENABLE0_SIZE                          (4u)
#define CapSense_WDGT_ENABLE0_PARAM_ID                      (0xE6000010u)

#define CapSense_WDGT_STATUS0_VALUE                         (CapSense_dsRam.wdgtStatus[0u])
#define CapSense_WDGT_STATUS0_OFFSET                        (20u)
#define CapSense_WDGT_STATUS0_SIZE                          (4u)
#define CapSense_WDGT_STATUS0_PARAM_ID                      (0xCC000014u)

#define CapSense_SNS_STATUS0_VALUE                          (CapSense_dsRam.snsStatus[0u])
#define CapSense_SNS_STATUS0_OFFSET                         (24u)
#define CapSense_SNS_STATUS0_SIZE                           (1u)
#define CapSense_SNS_STATUS0_PARAM_ID                       (0x48000018u)

#define CapSense_SNS_STATUS1_VALUE                          (CapSense_dsRam.snsStatus[1u])
#define CapSense_SNS_STATUS1_OFFSET                         (25u)
#define CapSense_SNS_STATUS1_SIZE                           (1u)
#define CapSense_SNS_STATUS1_PARAM_ID                       (0x4E000019u)

#define CapSense_SNS_STATUS2_VALUE                          (CapSense_dsRam.snsStatus[2u])
#define CapSense_SNS_STATUS2_OFFSET                         (26u)
#define CapSense_SNS_STATUS2_SIZE                           (1u)
#define CapSense_SNS_STATUS2_PARAM_ID                       (0x4400001Au)

#define CapSense_SNS_STATUS3_VALUE                          (CapSense_dsRam.snsStatus[3u])
#define CapSense_SNS_STATUS3_OFFSET                         (27u)
#define CapSense_SNS_STATUS3_SIZE                           (1u)
#define CapSense_SNS_STATUS3_PARAM_ID                       (0x4200001Bu)

#define CapSense_CSD0_CONFIG_VALUE                          (CapSense_dsRam.csd0Config)
#define CapSense_CSD0_CONFIG_OFFSET                         (28u)
#define CapSense_CSD0_CONFIG_SIZE                           (2u)
#define CapSense_CSD0_CONFIG_PARAM_ID                       (0xA780001Cu)

#define CapSense_MOD_CSD_CLK_VALUE                          (CapSense_dsRam.modCsdClk)
#define CapSense_MOD_CSD_CLK_OFFSET                         (30u)
#define CapSense_MOD_CSD_CLK_SIZE                           (1u)
#define CapSense_MOD_CSD_CLK_PARAM_ID                       (0x6380001Eu)

#define CapSense_UP_RESOLUTION_VALUE                        (CapSense_dsRam.wdgtList.up.resolution)
#define CapSense_UP_RESOLUTION_OFFSET                       (32u)
#define CapSense_UP_RESOLUTION_SIZE                         (2u)
#define CapSense_UP_RESOLUTION_PARAM_ID                     (0xAB800020u)

#define CapSense_UP_FINGER_TH_VALUE                         (CapSense_dsRam.wdgtList.up.fingerTh)
#define CapSense_UP_FINGER_TH_OFFSET                        (34u)
#define CapSense_UP_FINGER_TH_SIZE                          (2u)
#define CapSense_UP_FINGER_TH_PARAM_ID                      (0xA7800022u)

#define CapSense_UP_NOISE_TH_VALUE                          (CapSense_dsRam.wdgtList.up.noiseTh)
#define CapSense_UP_NOISE_TH_OFFSET                         (36u)
#define CapSense_UP_NOISE_TH_SIZE                           (1u)
#define CapSense_UP_NOISE_TH_PARAM_ID                       (0x62800024u)

#define CapSense_UP_NNOISE_TH_VALUE                         (CapSense_dsRam.wdgtList.up.nNoiseTh)
#define CapSense_UP_NNOISE_TH_OFFSET                        (37u)
#define CapSense_UP_NNOISE_TH_SIZE                          (1u)
#define CapSense_UP_NNOISE_TH_PARAM_ID                      (0x64800025u)

#define CapSense_UP_HYSTERESIS_VALUE                        (CapSense_dsRam.wdgtList.up.hysteresis)
#define CapSense_UP_HYSTERESIS_OFFSET                       (38u)
#define CapSense_UP_HYSTERESIS_SIZE                         (1u)
#define CapSense_UP_HYSTERESIS_PARAM_ID                     (0x6E800026u)

#define CapSense_UP_ON_DEBOUNCE_VALUE                       (CapSense_dsRam.wdgtList.up.onDebounce)
#define CapSense_UP_ON_DEBOUNCE_OFFSET                      (39u)
#define CapSense_UP_ON_DEBOUNCE_SIZE                        (1u)
#define CapSense_UP_ON_DEBOUNCE_PARAM_ID                    (0x68800027u)

#define CapSense_UP_LOW_BSLN_RST_VALUE                      (CapSense_dsRam.wdgtList.up.lowBslnRst)
#define CapSense_UP_LOW_BSLN_RST_OFFSET                     (40u)
#define CapSense_UP_LOW_BSLN_RST_SIZE                       (1u)
#define CapSense_UP_LOW_BSLN_RST_PARAM_ID                   (0x61800028u)

#define CapSense_UP_IDAC_MOD0_VALUE                         (CapSense_dsRam.wdgtList.up.idacMod[0u])
#define CapSense_UP_IDAC_MOD0_OFFSET                        (41u)
#define CapSense_UP_IDAC_MOD0_SIZE                          (1u)
#define CapSense_UP_IDAC_MOD0_PARAM_ID                      (0x41000029u)

#define CapSense_UP_IDAC_GAIN_INDEX_VALUE                   (CapSense_dsRam.wdgtList.up.idacGainIndex)
#define CapSense_UP_IDAC_GAIN_INDEX_OFFSET                  (42u)
#define CapSense_UP_IDAC_GAIN_INDEX_SIZE                    (1u)
#define CapSense_UP_IDAC_GAIN_INDEX_PARAM_ID                (0x4680002Au)

#define CapSense_UP_SNS_CLK_VALUE                           (CapSense_dsRam.wdgtList.up.snsClk)
#define CapSense_UP_SNS_CLK_OFFSET                          (44u)
#define CapSense_UP_SNS_CLK_SIZE                            (2u)
#define CapSense_UP_SNS_CLK_PARAM_ID                        (0xA880002Cu)

#define CapSense_UP_SNS_CLK_SOURCE_VALUE                    (CapSense_dsRam.wdgtList.up.snsClkSource)
#define CapSense_UP_SNS_CLK_SOURCE_OFFSET                   (46u)
#define CapSense_UP_SNS_CLK_SOURCE_SIZE                     (1u)
#define CapSense_UP_SNS_CLK_SOURCE_PARAM_ID                 (0x4780002Eu)

#define CapSense_DOWN_RESOLUTION_VALUE                      (CapSense_dsRam.wdgtList.down.resolution)
#define CapSense_DOWN_RESOLUTION_OFFSET                     (48u)
#define CapSense_DOWN_RESOLUTION_SIZE                       (2u)
#define CapSense_DOWN_RESOLUTION_PARAM_ID                   (0xAD810030u)

#define CapSense_DOWN_FINGER_TH_VALUE                       (CapSense_dsRam.wdgtList.down.fingerTh)
#define CapSense_DOWN_FINGER_TH_OFFSET                      (50u)
#define CapSense_DOWN_FINGER_TH_SIZE                        (2u)
#define CapSense_DOWN_FINGER_TH_PARAM_ID                    (0xA1810032u)

#define CapSense_DOWN_NOISE_TH_VALUE                        (CapSense_dsRam.wdgtList.down.noiseTh)
#define CapSense_DOWN_NOISE_TH_OFFSET                       (52u)
#define CapSense_DOWN_NOISE_TH_SIZE                         (1u)
#define CapSense_DOWN_NOISE_TH_PARAM_ID                     (0x64810034u)

#define CapSense_DOWN_NNOISE_TH_VALUE                       (CapSense_dsRam.wdgtList.down.nNoiseTh)
#define CapSense_DOWN_NNOISE_TH_OFFSET                      (53u)
#define CapSense_DOWN_NNOISE_TH_SIZE                        (1u)
#define CapSense_DOWN_NNOISE_TH_PARAM_ID                    (0x62810035u)

#define CapSense_DOWN_HYSTERESIS_VALUE                      (CapSense_dsRam.wdgtList.down.hysteresis)
#define CapSense_DOWN_HYSTERESIS_OFFSET                     (54u)
#define CapSense_DOWN_HYSTERESIS_SIZE                       (1u)
#define CapSense_DOWN_HYSTERESIS_PARAM_ID                   (0x68810036u)

#define CapSense_DOWN_ON_DEBOUNCE_VALUE                     (CapSense_dsRam.wdgtList.down.onDebounce)
#define CapSense_DOWN_ON_DEBOUNCE_OFFSET                    (55u)
#define CapSense_DOWN_ON_DEBOUNCE_SIZE                      (1u)
#define CapSense_DOWN_ON_DEBOUNCE_PARAM_ID                  (0x6E810037u)

#define CapSense_DOWN_LOW_BSLN_RST_VALUE                    (CapSense_dsRam.wdgtList.down.lowBslnRst)
#define CapSense_DOWN_LOW_BSLN_RST_OFFSET                   (56u)
#define CapSense_DOWN_LOW_BSLN_RST_SIZE                     (1u)
#define CapSense_DOWN_LOW_BSLN_RST_PARAM_ID                 (0x67810038u)

#define CapSense_DOWN_IDAC_MOD0_VALUE                       (CapSense_dsRam.wdgtList.down.idacMod[0u])
#define CapSense_DOWN_IDAC_MOD0_OFFSET                      (57u)
#define CapSense_DOWN_IDAC_MOD0_SIZE                        (1u)
#define CapSense_DOWN_IDAC_MOD0_PARAM_ID                    (0x47010039u)

#define CapSense_DOWN_IDAC_GAIN_INDEX_VALUE                 (CapSense_dsRam.wdgtList.down.idacGainIndex)
#define CapSense_DOWN_IDAC_GAIN_INDEX_OFFSET                (58u)
#define CapSense_DOWN_IDAC_GAIN_INDEX_SIZE                  (1u)
#define CapSense_DOWN_IDAC_GAIN_INDEX_PARAM_ID              (0x4081003Au)

#define CapSense_DOWN_SNS_CLK_VALUE                         (CapSense_dsRam.wdgtList.down.snsClk)
#define CapSense_DOWN_SNS_CLK_OFFSET                        (60u)
#define CapSense_DOWN_SNS_CLK_SIZE                          (2u)
#define CapSense_DOWN_SNS_CLK_PARAM_ID                      (0xAE81003Cu)

#define CapSense_DOWN_SNS_CLK_SOURCE_VALUE                  (CapSense_dsRam.wdgtList.down.snsClkSource)
#define CapSense_DOWN_SNS_CLK_SOURCE_OFFSET                 (62u)
#define CapSense_DOWN_SNS_CLK_SOURCE_SIZE                   (1u)
#define CapSense_DOWN_SNS_CLK_SOURCE_PARAM_ID               (0x4181003Eu)

#define CapSense_LEFT_RESOLUTION_VALUE                      (CapSense_dsRam.wdgtList.left.resolution)
#define CapSense_LEFT_RESOLUTION_OFFSET                     (64u)
#define CapSense_LEFT_RESOLUTION_SIZE                       (2u)
#define CapSense_LEFT_RESOLUTION_PARAM_ID                   (0xAA820040u)

#define CapSense_LEFT_FINGER_TH_VALUE                       (CapSense_dsRam.wdgtList.left.fingerTh)
#define CapSense_LEFT_FINGER_TH_OFFSET                      (66u)
#define CapSense_LEFT_FINGER_TH_SIZE                        (2u)
#define CapSense_LEFT_FINGER_TH_PARAM_ID                    (0xA6820042u)

#define CapSense_LEFT_NOISE_TH_VALUE                        (CapSense_dsRam.wdgtList.left.noiseTh)
#define CapSense_LEFT_NOISE_TH_OFFSET                       (68u)
#define CapSense_LEFT_NOISE_TH_SIZE                         (1u)
#define CapSense_LEFT_NOISE_TH_PARAM_ID                     (0x63820044u)

#define CapSense_LEFT_NNOISE_TH_VALUE                       (CapSense_dsRam.wdgtList.left.nNoiseTh)
#define CapSense_LEFT_NNOISE_TH_OFFSET                      (69u)
#define CapSense_LEFT_NNOISE_TH_SIZE                        (1u)
#define CapSense_LEFT_NNOISE_TH_PARAM_ID                    (0x65820045u)

#define CapSense_LEFT_HYSTERESIS_VALUE                      (CapSense_dsRam.wdgtList.left.hysteresis)
#define CapSense_LEFT_HYSTERESIS_OFFSET                     (70u)
#define CapSense_LEFT_HYSTERESIS_SIZE                       (1u)
#define CapSense_LEFT_HYSTERESIS_PARAM_ID                   (0x6F820046u)

#define CapSense_LEFT_ON_DEBOUNCE_VALUE                     (CapSense_dsRam.wdgtList.left.onDebounce)
#define CapSense_LEFT_ON_DEBOUNCE_OFFSET                    (71u)
#define CapSense_LEFT_ON_DEBOUNCE_SIZE                      (1u)
#define CapSense_LEFT_ON_DEBOUNCE_PARAM_ID                  (0x69820047u)

#define CapSense_LEFT_LOW_BSLN_RST_VALUE                    (CapSense_dsRam.wdgtList.left.lowBslnRst)
#define CapSense_LEFT_LOW_BSLN_RST_OFFSET                   (72u)
#define CapSense_LEFT_LOW_BSLN_RST_SIZE                     (1u)
#define CapSense_LEFT_LOW_BSLN_RST_PARAM_ID                 (0x60820048u)

#define CapSense_LEFT_IDAC_MOD0_VALUE                       (CapSense_dsRam.wdgtList.left.idacMod[0u])
#define CapSense_LEFT_IDAC_MOD0_OFFSET                      (73u)
#define CapSense_LEFT_IDAC_MOD0_SIZE                        (1u)
#define CapSense_LEFT_IDAC_MOD0_PARAM_ID                    (0x40020049u)

#define CapSense_LEFT_IDAC_GAIN_INDEX_VALUE                 (CapSense_dsRam.wdgtList.left.idacGainIndex)
#define CapSense_LEFT_IDAC_GAIN_INDEX_OFFSET                (74u)
#define CapSense_LEFT_IDAC_GAIN_INDEX_SIZE                  (1u)
#define CapSense_LEFT_IDAC_GAIN_INDEX_PARAM_ID              (0x4782004Au)

#define CapSense_LEFT_SNS_CLK_VALUE                         (CapSense_dsRam.wdgtList.left.snsClk)
#define CapSense_LEFT_SNS_CLK_OFFSET                        (76u)
#define CapSense_LEFT_SNS_CLK_SIZE                          (2u)
#define CapSense_LEFT_SNS_CLK_PARAM_ID                      (0xA982004Cu)

#define CapSense_LEFT_SNS_CLK_SOURCE_VALUE                  (CapSense_dsRam.wdgtList.left.snsClkSource)
#define CapSense_LEFT_SNS_CLK_SOURCE_OFFSET                 (78u)
#define CapSense_LEFT_SNS_CLK_SOURCE_SIZE                   (1u)
#define CapSense_LEFT_SNS_CLK_SOURCE_PARAM_ID               (0x4682004Eu)

#define CapSense_RIGHT_RESOLUTION_VALUE                     (CapSense_dsRam.wdgtList.right.resolution)
#define CapSense_RIGHT_RESOLUTION_OFFSET                    (80u)
#define CapSense_RIGHT_RESOLUTION_SIZE                      (2u)
#define CapSense_RIGHT_RESOLUTION_PARAM_ID                  (0xAC830050u)

#define CapSense_RIGHT_FINGER_TH_VALUE                      (CapSense_dsRam.wdgtList.right.fingerTh)
#define CapSense_RIGHT_FINGER_TH_OFFSET                     (82u)
#define CapSense_RIGHT_FINGER_TH_SIZE                       (2u)
#define CapSense_RIGHT_FINGER_TH_PARAM_ID                   (0xA0830052u)

#define CapSense_RIGHT_NOISE_TH_VALUE                       (CapSense_dsRam.wdgtList.right.noiseTh)
#define CapSense_RIGHT_NOISE_TH_OFFSET                      (84u)
#define CapSense_RIGHT_NOISE_TH_SIZE                        (1u)
#define CapSense_RIGHT_NOISE_TH_PARAM_ID                    (0x65830054u)

#define CapSense_RIGHT_NNOISE_TH_VALUE                      (CapSense_dsRam.wdgtList.right.nNoiseTh)
#define CapSense_RIGHT_NNOISE_TH_OFFSET                     (85u)
#define CapSense_RIGHT_NNOISE_TH_SIZE                       (1u)
#define CapSense_RIGHT_NNOISE_TH_PARAM_ID                   (0x63830055u)

#define CapSense_RIGHT_HYSTERESIS_VALUE                     (CapSense_dsRam.wdgtList.right.hysteresis)
#define CapSense_RIGHT_HYSTERESIS_OFFSET                    (86u)
#define CapSense_RIGHT_HYSTERESIS_SIZE                      (1u)
#define CapSense_RIGHT_HYSTERESIS_PARAM_ID                  (0x69830056u)

#define CapSense_RIGHT_ON_DEBOUNCE_VALUE                    (CapSense_dsRam.wdgtList.right.onDebounce)
#define CapSense_RIGHT_ON_DEBOUNCE_OFFSET                   (87u)
#define CapSense_RIGHT_ON_DEBOUNCE_SIZE                     (1u)
#define CapSense_RIGHT_ON_DEBOUNCE_PARAM_ID                 (0x6F830057u)

#define CapSense_RIGHT_LOW_BSLN_RST_VALUE                   (CapSense_dsRam.wdgtList.right.lowBslnRst)
#define CapSense_RIGHT_LOW_BSLN_RST_OFFSET                  (88u)
#define CapSense_RIGHT_LOW_BSLN_RST_SIZE                    (1u)
#define CapSense_RIGHT_LOW_BSLN_RST_PARAM_ID                (0x66830058u)

#define CapSense_RIGHT_IDAC_MOD0_VALUE                      (CapSense_dsRam.wdgtList.right.idacMod[0u])
#define CapSense_RIGHT_IDAC_MOD0_OFFSET                     (89u)
#define CapSense_RIGHT_IDAC_MOD0_SIZE                       (1u)
#define CapSense_RIGHT_IDAC_MOD0_PARAM_ID                   (0x46030059u)

#define CapSense_RIGHT_IDAC_GAIN_INDEX_VALUE                (CapSense_dsRam.wdgtList.right.idacGainIndex)
#define CapSense_RIGHT_IDAC_GAIN_INDEX_OFFSET               (90u)
#define CapSense_RIGHT_IDAC_GAIN_INDEX_SIZE                 (1u)
#define CapSense_RIGHT_IDAC_GAIN_INDEX_PARAM_ID             (0x4183005Au)

#define CapSense_RIGHT_SNS_CLK_VALUE                        (CapSense_dsRam.wdgtList.right.snsClk)
#define CapSense_RIGHT_SNS_CLK_OFFSET                       (92u)
#define CapSense_RIGHT_SNS_CLK_SIZE                         (2u)
#define CapSense_RIGHT_SNS_CLK_PARAM_ID                     (0xAF83005Cu)

#define CapSense_RIGHT_SNS_CLK_SOURCE_VALUE                 (CapSense_dsRam.wdgtList.right.snsClkSource)
#define CapSense_RIGHT_SNS_CLK_SOURCE_OFFSET                (94u)
#define CapSense_RIGHT_SNS_CLK_SOURCE_SIZE                  (1u)
#define CapSense_RIGHT_SNS_CLK_SOURCE_PARAM_ID              (0x4083005Eu)

#define CapSense_UP_SNS0_RAW0_VALUE                         (CapSense_dsRam.snsList.up[0u].raw[0u])
#define CapSense_UP_SNS0_RAW0_OFFSET                        (96u)
#define CapSense_UP_SNS0_RAW0_SIZE                          (2u)
#define CapSense_UP_SNS0_RAW0_PARAM_ID                      (0x80000060u)

#define CapSense_UP_SNS0_BSLN0_VALUE                        (CapSense_dsRam.snsList.up[0u].bsln[0u])
#define CapSense_UP_SNS0_BSLN0_OFFSET                       (98u)
#define CapSense_UP_SNS0_BSLN0_SIZE                         (2u)
#define CapSense_UP_SNS0_BSLN0_PARAM_ID                     (0x8C000062u)

#define CapSense_UP_SNS0_BSLN_EXT0_VALUE                    (CapSense_dsRam.snsList.up[0u].bslnExt[0u])
#define CapSense_UP_SNS0_BSLN_EXT0_OFFSET                   (100u)
#define CapSense_UP_SNS0_BSLN_EXT0_SIZE                     (1u)
#define CapSense_UP_SNS0_BSLN_EXT0_PARAM_ID                 (0x49000064u)

#define CapSense_UP_SNS0_DIFF_VALUE                         (CapSense_dsRam.snsList.up[0u].diff)
#define CapSense_UP_SNS0_DIFF_OFFSET                        (102u)
#define CapSense_UP_SNS0_DIFF_SIZE                          (2u)
#define CapSense_UP_SNS0_DIFF_PARAM_ID                      (0x8D000066u)

#define CapSense_UP_SNS0_NEG_BSLN_RST_CNT0_VALUE            (CapSense_dsRam.snsList.up[0u].negBslnRstCnt[0u])
#define CapSense_UP_SNS0_NEG_BSLN_RST_CNT0_OFFSET           (104u)
#define CapSense_UP_SNS0_NEG_BSLN_RST_CNT0_SIZE             (1u)
#define CapSense_UP_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID         (0x4A000068u)

#define CapSense_UP_SNS0_IDAC_COMP0_VALUE                   (CapSense_dsRam.snsList.up[0u].idacComp[0u])
#define CapSense_UP_SNS0_IDAC_COMP0_OFFSET                  (105u)
#define CapSense_UP_SNS0_IDAC_COMP0_SIZE                    (1u)
#define CapSense_UP_SNS0_IDAC_COMP0_PARAM_ID                (0x4C000069u)

#define CapSense_DOWN_SNS0_RAW0_VALUE                       (CapSense_dsRam.snsList.down[0u].raw[0u])
#define CapSense_DOWN_SNS0_RAW0_OFFSET                      (106u)
#define CapSense_DOWN_SNS0_RAW0_SIZE                        (2u)
#define CapSense_DOWN_SNS0_RAW0_PARAM_ID                    (0x8E00006Au)

#define CapSense_DOWN_SNS0_BSLN0_VALUE                      (CapSense_dsRam.snsList.down[0u].bsln[0u])
#define CapSense_DOWN_SNS0_BSLN0_OFFSET                     (108u)
#define CapSense_DOWN_SNS0_BSLN0_SIZE                       (2u)
#define CapSense_DOWN_SNS0_BSLN0_PARAM_ID                   (0x8300006Cu)

#define CapSense_DOWN_SNS0_BSLN_EXT0_VALUE                  (CapSense_dsRam.snsList.down[0u].bslnExt[0u])
#define CapSense_DOWN_SNS0_BSLN_EXT0_OFFSET                 (110u)
#define CapSense_DOWN_SNS0_BSLN_EXT0_SIZE                   (1u)
#define CapSense_DOWN_SNS0_BSLN_EXT0_PARAM_ID               (0x4700006Eu)

#define CapSense_DOWN_SNS0_DIFF_VALUE                       (CapSense_dsRam.snsList.down[0u].diff)
#define CapSense_DOWN_SNS0_DIFF_OFFSET                      (112u)
#define CapSense_DOWN_SNS0_DIFF_SIZE                        (2u)
#define CapSense_DOWN_SNS0_DIFF_PARAM_ID                    (0x85000070u)

#define CapSense_DOWN_SNS0_NEG_BSLN_RST_CNT0_VALUE          (CapSense_dsRam.snsList.down[0u].negBslnRstCnt[0u])
#define CapSense_DOWN_SNS0_NEG_BSLN_RST_CNT0_OFFSET         (114u)
#define CapSense_DOWN_SNS0_NEG_BSLN_RST_CNT0_SIZE           (1u)
#define CapSense_DOWN_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID       (0x41000072u)

#define CapSense_DOWN_SNS0_IDAC_COMP0_VALUE                 (CapSense_dsRam.snsList.down[0u].idacComp[0u])
#define CapSense_DOWN_SNS0_IDAC_COMP0_OFFSET                (115u)
#define CapSense_DOWN_SNS0_IDAC_COMP0_SIZE                  (1u)
#define CapSense_DOWN_SNS0_IDAC_COMP0_PARAM_ID              (0x47000073u)

#define CapSense_LEFT_SNS0_RAW0_VALUE                       (CapSense_dsRam.snsList.left[0u].raw[0u])
#define CapSense_LEFT_SNS0_RAW0_OFFSET                      (116u)
#define CapSense_LEFT_SNS0_RAW0_SIZE                        (2u)
#define CapSense_LEFT_SNS0_RAW0_PARAM_ID                    (0x84000074u)

#define CapSense_LEFT_SNS0_BSLN0_VALUE                      (CapSense_dsRam.snsList.left[0u].bsln[0u])
#define CapSense_LEFT_SNS0_BSLN0_OFFSET                     (118u)
#define CapSense_LEFT_SNS0_BSLN0_SIZE                       (2u)
#define CapSense_LEFT_SNS0_BSLN0_PARAM_ID                   (0x88000076u)

#define CapSense_LEFT_SNS0_BSLN_EXT0_VALUE                  (CapSense_dsRam.snsList.left[0u].bslnExt[0u])
#define CapSense_LEFT_SNS0_BSLN_EXT0_OFFSET                 (120u)
#define CapSense_LEFT_SNS0_BSLN_EXT0_SIZE                   (1u)
#define CapSense_LEFT_SNS0_BSLN_EXT0_PARAM_ID               (0x4F000078u)

#define CapSense_LEFT_SNS0_DIFF_VALUE                       (CapSense_dsRam.snsList.left[0u].diff)
#define CapSense_LEFT_SNS0_DIFF_OFFSET                      (122u)
#define CapSense_LEFT_SNS0_DIFF_SIZE                        (2u)
#define CapSense_LEFT_SNS0_DIFF_PARAM_ID                    (0x8B00007Au)

#define CapSense_LEFT_SNS0_NEG_BSLN_RST_CNT0_VALUE          (CapSense_dsRam.snsList.left[0u].negBslnRstCnt[0u])
#define CapSense_LEFT_SNS0_NEG_BSLN_RST_CNT0_OFFSET         (124u)
#define CapSense_LEFT_SNS0_NEG_BSLN_RST_CNT0_SIZE           (1u)
#define CapSense_LEFT_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID       (0x4E00007Cu)

#define CapSense_LEFT_SNS0_IDAC_COMP0_VALUE                 (CapSense_dsRam.snsList.left[0u].idacComp[0u])
#define CapSense_LEFT_SNS0_IDAC_COMP0_OFFSET                (125u)
#define CapSense_LEFT_SNS0_IDAC_COMP0_SIZE                  (1u)
#define CapSense_LEFT_SNS0_IDAC_COMP0_PARAM_ID              (0x4800007Du)

#define CapSense_RIGHT_SNS0_RAW0_VALUE                      (CapSense_dsRam.snsList.right[0u].raw[0u])
#define CapSense_RIGHT_SNS0_RAW0_OFFSET                     (126u)
#define CapSense_RIGHT_SNS0_RAW0_SIZE                       (2u)
#define CapSense_RIGHT_SNS0_RAW0_PARAM_ID                   (0x8A00007Eu)

#define CapSense_RIGHT_SNS0_BSLN0_VALUE                     (CapSense_dsRam.snsList.right[0u].bsln[0u])
#define CapSense_RIGHT_SNS0_BSLN0_OFFSET                    (128u)
#define CapSense_RIGHT_SNS0_BSLN0_SIZE                      (2u)
#define CapSense_RIGHT_SNS0_BSLN0_PARAM_ID                  (0x84000080u)

#define CapSense_RIGHT_SNS0_BSLN_EXT0_VALUE                 (CapSense_dsRam.snsList.right[0u].bslnExt[0u])
#define CapSense_RIGHT_SNS0_BSLN_EXT0_OFFSET                (130u)
#define CapSense_RIGHT_SNS0_BSLN_EXT0_SIZE                  (1u)
#define CapSense_RIGHT_SNS0_BSLN_EXT0_PARAM_ID              (0x40000082u)

#define CapSense_RIGHT_SNS0_DIFF_VALUE                      (CapSense_dsRam.snsList.right[0u].diff)
#define CapSense_RIGHT_SNS0_DIFF_OFFSET                     (132u)
#define CapSense_RIGHT_SNS0_DIFF_SIZE                       (2u)
#define CapSense_RIGHT_SNS0_DIFF_PARAM_ID                   (0x85000084u)

#define CapSense_RIGHT_SNS0_NEG_BSLN_RST_CNT0_VALUE         (CapSense_dsRam.snsList.right[0u].negBslnRstCnt[0u])
#define CapSense_RIGHT_SNS0_NEG_BSLN_RST_CNT0_OFFSET        (134u)
#define CapSense_RIGHT_SNS0_NEG_BSLN_RST_CNT0_SIZE          (1u)
#define CapSense_RIGHT_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID      (0x41000086u)

#define CapSense_RIGHT_SNS0_IDAC_COMP0_VALUE                (CapSense_dsRam.snsList.right[0u].idacComp[0u])
#define CapSense_RIGHT_SNS0_IDAC_COMP0_OFFSET               (135u)
#define CapSense_RIGHT_SNS0_IDAC_COMP0_SIZE                 (1u)
#define CapSense_RIGHT_SNS0_IDAC_COMP0_PARAM_ID             (0x47000087u)

#define CapSense_SNR_TEST_WIDGET_ID_VALUE                   (CapSense_dsRam.snrTestWidgetId)
#define CapSense_SNR_TEST_WIDGET_ID_OFFSET                  (136u)
#define CapSense_SNR_TEST_WIDGET_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_WIDGET_ID_PARAM_ID                (0x65000088u)

#define CapSense_SNR_TEST_SENSOR_ID_VALUE                   (CapSense_dsRam.snrTestSensorId)
#define CapSense_SNR_TEST_SENSOR_ID_OFFSET                  (137u)
#define CapSense_SNR_TEST_SENSOR_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_SENSOR_ID_PARAM_ID                (0x63000089u)

#define CapSense_SNR_TEST_SCAN_COUNTER_VALUE                (CapSense_dsRam.snrTestScanCounter)
#define CapSense_SNR_TEST_SCAN_COUNTER_OFFSET               (138u)
#define CapSense_SNR_TEST_SCAN_COUNTER_SIZE                 (2u)
#define CapSense_SNR_TEST_SCAN_COUNTER_PARAM_ID             (0x8A00008Au)

#define CapSense_SNR_TEST_RAW_COUNT0_VALUE                  (CapSense_dsRam.snrTestRawCount[0u])
#define CapSense_SNR_TEST_RAW_COUNT0_OFFSET                 (140u)
#define CapSense_SNR_TEST_RAW_COUNT0_SIZE                   (2u)
#define CapSense_SNR_TEST_RAW_COUNT0_PARAM_ID               (0x8700008Cu)

#define CapSense_SCAN_CSD_ISC_VALUE                         (CapSense_dsRam.scanCsdISC)
#define CapSense_SCAN_CSD_ISC_OFFSET                        (142u)
#define CapSense_SCAN_CSD_ISC_SIZE                          (1u)
#define CapSense_SCAN_CSD_ISC_PARAM_ID                      (0x4300008Eu)

#define CapSense_SCAN_CURRENT_ISC_VALUE                     (CapSense_dsRam.scanCurrentISC)
#define CapSense_SCAN_CURRENT_ISC_OFFSET                    (143u)
#define CapSense_SCAN_CURRENT_ISC_SIZE                      (1u)
#define CapSense_SCAN_CURRENT_ISC_PARAM_ID                  (0x4500008Fu)


/*****************************************************************************/
/* Flash Data structure register definitions                                 */
/*****************************************************************************/
#define CapSense_UP_PTR2SNS_FLASH_VALUE                     (CapSense_dsFlash.wdgtArray[0].ptr2SnsFlash)
#define CapSense_UP_PTR2SNS_FLASH_OFFSET                    (0u)
#define CapSense_UP_PTR2SNS_FLASH_SIZE                      (4u)
#define CapSense_UP_PTR2SNS_FLASH_PARAM_ID                  (0xD1000000u)

#define CapSense_UP_PTR2WD_RAM_VALUE                        (CapSense_dsFlash.wdgtArray[0].ptr2WdgtRam)
#define CapSense_UP_PTR2WD_RAM_OFFSET                       (4u)
#define CapSense_UP_PTR2WD_RAM_SIZE                         (4u)
#define CapSense_UP_PTR2WD_RAM_PARAM_ID                     (0xD0000004u)

#define CapSense_UP_PTR2SNS_RAM_VALUE                       (CapSense_dsFlash.wdgtArray[0].ptr2SnsRam)
#define CapSense_UP_PTR2SNS_RAM_OFFSET                      (8u)
#define CapSense_UP_PTR2SNS_RAM_SIZE                        (4u)
#define CapSense_UP_PTR2SNS_RAM_PARAM_ID                    (0xD3000008u)

#define CapSense_UP_PTR2FLTR_HISTORY_VALUE                  (CapSense_dsFlash.wdgtArray[0].ptr2FltrHistory)
#define CapSense_UP_PTR2FLTR_HISTORY_OFFSET                 (12u)
#define CapSense_UP_PTR2FLTR_HISTORY_SIZE                   (4u)
#define CapSense_UP_PTR2FLTR_HISTORY_PARAM_ID               (0xD200000Cu)

#define CapSense_UP_PTR2DEBOUNCE_VALUE                      (CapSense_dsFlash.wdgtArray[0].ptr2DebounceArr)
#define CapSense_UP_PTR2DEBOUNCE_OFFSET                     (16u)
#define CapSense_UP_PTR2DEBOUNCE_SIZE                       (4u)
#define CapSense_UP_PTR2DEBOUNCE_PARAM_ID                   (0xD4000010u)

#define CapSense_UP_STATIC_CONFIG_VALUE                     (CapSense_dsFlash.wdgtArray[0].staticConfig)
#define CapSense_UP_STATIC_CONFIG_OFFSET                    (20u)
#define CapSense_UP_STATIC_CONFIG_SIZE                      (4u)
#define CapSense_UP_STATIC_CONFIG_PARAM_ID                  (0xD5000014u)

#define CapSense_UP_TOTAL_NUM_SNS_VALUE                     (CapSense_dsFlash.wdgtArray[0].totalNumSns)
#define CapSense_UP_TOTAL_NUM_SNS_OFFSET                    (24u)
#define CapSense_UP_TOTAL_NUM_SNS_SIZE                      (2u)
#define CapSense_UP_TOTAL_NUM_SNS_PARAM_ID                  (0x99000018u)

#define CapSense_UP_TYPE_VALUE                              (CapSense_dsFlash.wdgtArray[0].wdgtType)
#define CapSense_UP_TYPE_OFFSET                             (26u)
#define CapSense_UP_TYPE_SIZE                               (1u)
#define CapSense_UP_TYPE_PARAM_ID                           (0x5D00001Au)

#define CapSense_UP_NUM_COLS_VALUE                          (CapSense_dsFlash.wdgtArray[0].numCols)
#define CapSense_UP_NUM_COLS_OFFSET                         (27u)
#define CapSense_UP_NUM_COLS_SIZE                           (1u)
#define CapSense_UP_NUM_COLS_PARAM_ID                       (0x5B00001Bu)

#define CapSense_DOWN_PTR2SNS_FLASH_VALUE                   (CapSense_dsFlash.wdgtArray[1].ptr2SnsFlash)
#define CapSense_DOWN_PTR2SNS_FLASH_OFFSET                  (28u)
#define CapSense_DOWN_PTR2SNS_FLASH_SIZE                    (4u)
#define CapSense_DOWN_PTR2SNS_FLASH_PARAM_ID                (0xD401001Cu)

#define CapSense_DOWN_PTR2WD_RAM_VALUE                      (CapSense_dsFlash.wdgtArray[1].ptr2WdgtRam)
#define CapSense_DOWN_PTR2WD_RAM_OFFSET                     (32u)
#define CapSense_DOWN_PTR2WD_RAM_SIZE                       (4u)
#define CapSense_DOWN_PTR2WD_RAM_PARAM_ID                   (0xD8010020u)

#define CapSense_DOWN_PTR2SNS_RAM_VALUE                     (CapSense_dsFlash.wdgtArray[1].ptr2SnsRam)
#define CapSense_DOWN_PTR2SNS_RAM_OFFSET                    (36u)
#define CapSense_DOWN_PTR2SNS_RAM_SIZE                      (4u)
#define CapSense_DOWN_PTR2SNS_RAM_PARAM_ID                  (0xD9010024u)

#define CapSense_DOWN_PTR2FLTR_HISTORY_VALUE                (CapSense_dsFlash.wdgtArray[1].ptr2FltrHistory)
#define CapSense_DOWN_PTR2FLTR_HISTORY_OFFSET               (40u)
#define CapSense_DOWN_PTR2FLTR_HISTORY_SIZE                 (4u)
#define CapSense_DOWN_PTR2FLTR_HISTORY_PARAM_ID             (0xDA010028u)

#define CapSense_DOWN_PTR2DEBOUNCE_VALUE                    (CapSense_dsFlash.wdgtArray[1].ptr2DebounceArr)
#define CapSense_DOWN_PTR2DEBOUNCE_OFFSET                   (44u)
#define CapSense_DOWN_PTR2DEBOUNCE_SIZE                     (4u)
#define CapSense_DOWN_PTR2DEBOUNCE_PARAM_ID                 (0xDB01002Cu)

#define CapSense_DOWN_STATIC_CONFIG_VALUE                   (CapSense_dsFlash.wdgtArray[1].staticConfig)
#define CapSense_DOWN_STATIC_CONFIG_OFFSET                  (48u)
#define CapSense_DOWN_STATIC_CONFIG_SIZE                    (4u)
#define CapSense_DOWN_STATIC_CONFIG_PARAM_ID                (0xDD010030u)

#define CapSense_DOWN_TOTAL_NUM_SNS_VALUE                   (CapSense_dsFlash.wdgtArray[1].totalNumSns)
#define CapSense_DOWN_TOTAL_NUM_SNS_OFFSET                  (52u)
#define CapSense_DOWN_TOTAL_NUM_SNS_SIZE                    (2u)
#define CapSense_DOWN_TOTAL_NUM_SNS_PARAM_ID                (0x93010034u)

#define CapSense_DOWN_TYPE_VALUE                            (CapSense_dsFlash.wdgtArray[1].wdgtType)
#define CapSense_DOWN_TYPE_OFFSET                           (54u)
#define CapSense_DOWN_TYPE_SIZE                             (1u)
#define CapSense_DOWN_TYPE_PARAM_ID                         (0x57010036u)

#define CapSense_DOWN_NUM_COLS_VALUE                        (CapSense_dsFlash.wdgtArray[1].numCols)
#define CapSense_DOWN_NUM_COLS_OFFSET                       (55u)
#define CapSense_DOWN_NUM_COLS_SIZE                         (1u)
#define CapSense_DOWN_NUM_COLS_PARAM_ID                     (0x51010037u)

#define CapSense_LEFT_PTR2SNS_FLASH_VALUE                   (CapSense_dsFlash.wdgtArray[2].ptr2SnsFlash)
#define CapSense_LEFT_PTR2SNS_FLASH_OFFSET                  (56u)
#define CapSense_LEFT_PTR2SNS_FLASH_SIZE                    (4u)
#define CapSense_LEFT_PTR2SNS_FLASH_PARAM_ID                (0xDA020038u)

#define CapSense_LEFT_PTR2WD_RAM_VALUE                      (CapSense_dsFlash.wdgtArray[2].ptr2WdgtRam)
#define CapSense_LEFT_PTR2WD_RAM_OFFSET                     (60u)
#define CapSense_LEFT_PTR2WD_RAM_SIZE                       (4u)
#define CapSense_LEFT_PTR2WD_RAM_PARAM_ID                   (0xDB02003Cu)

#define CapSense_LEFT_PTR2SNS_RAM_VALUE                     (CapSense_dsFlash.wdgtArray[2].ptr2SnsRam)
#define CapSense_LEFT_PTR2SNS_RAM_OFFSET                    (64u)
#define CapSense_LEFT_PTR2SNS_RAM_SIZE                      (4u)
#define CapSense_LEFT_PTR2SNS_RAM_PARAM_ID                  (0xDA020040u)

#define CapSense_LEFT_PTR2FLTR_HISTORY_VALUE                (CapSense_dsFlash.wdgtArray[2].ptr2FltrHistory)
#define CapSense_LEFT_PTR2FLTR_HISTORY_OFFSET               (68u)
#define CapSense_LEFT_PTR2FLTR_HISTORY_SIZE                 (4u)
#define CapSense_LEFT_PTR2FLTR_HISTORY_PARAM_ID             (0xDB020044u)

#define CapSense_LEFT_PTR2DEBOUNCE_VALUE                    (CapSense_dsFlash.wdgtArray[2].ptr2DebounceArr)
#define CapSense_LEFT_PTR2DEBOUNCE_OFFSET                   (72u)
#define CapSense_LEFT_PTR2DEBOUNCE_SIZE                     (4u)
#define CapSense_LEFT_PTR2DEBOUNCE_PARAM_ID                 (0xD8020048u)

#define CapSense_LEFT_STATIC_CONFIG_VALUE                   (CapSense_dsFlash.wdgtArray[2].staticConfig)
#define CapSense_LEFT_STATIC_CONFIG_OFFSET                  (76u)
#define CapSense_LEFT_STATIC_CONFIG_SIZE                    (4u)
#define CapSense_LEFT_STATIC_CONFIG_PARAM_ID                (0xD902004Cu)

#define CapSense_LEFT_TOTAL_NUM_SNS_VALUE                   (CapSense_dsFlash.wdgtArray[2].totalNumSns)
#define CapSense_LEFT_TOTAL_NUM_SNS_OFFSET                  (80u)
#define CapSense_LEFT_TOTAL_NUM_SNS_SIZE                    (2u)
#define CapSense_LEFT_TOTAL_NUM_SNS_PARAM_ID                (0x90020050u)

#define CapSense_LEFT_TYPE_VALUE                            (CapSense_dsFlash.wdgtArray[2].wdgtType)
#define CapSense_LEFT_TYPE_OFFSET                           (82u)
#define CapSense_LEFT_TYPE_SIZE                             (1u)
#define CapSense_LEFT_TYPE_PARAM_ID                         (0x54020052u)

#define CapSense_LEFT_NUM_COLS_VALUE                        (CapSense_dsFlash.wdgtArray[2].numCols)
#define CapSense_LEFT_NUM_COLS_OFFSET                       (83u)
#define CapSense_LEFT_NUM_COLS_SIZE                         (1u)
#define CapSense_LEFT_NUM_COLS_PARAM_ID                     (0x52020053u)

#define CapSense_RIGHT_PTR2SNS_FLASH_VALUE                  (CapSense_dsFlash.wdgtArray[3].ptr2SnsFlash)
#define CapSense_RIGHT_PTR2SNS_FLASH_OFFSET                 (84u)
#define CapSense_RIGHT_PTR2SNS_FLASH_SIZE                   (4u)
#define CapSense_RIGHT_PTR2SNS_FLASH_PARAM_ID               (0xDD030054u)

#define CapSense_RIGHT_PTR2WD_RAM_VALUE                     (CapSense_dsFlash.wdgtArray[3].ptr2WdgtRam)
#define CapSense_RIGHT_PTR2WD_RAM_OFFSET                    (88u)
#define CapSense_RIGHT_PTR2WD_RAM_SIZE                      (4u)
#define CapSense_RIGHT_PTR2WD_RAM_PARAM_ID                  (0xDE030058u)

#define CapSense_RIGHT_PTR2SNS_RAM_VALUE                    (CapSense_dsFlash.wdgtArray[3].ptr2SnsRam)
#define CapSense_RIGHT_PTR2SNS_RAM_OFFSET                   (92u)
#define CapSense_RIGHT_PTR2SNS_RAM_SIZE                     (4u)
#define CapSense_RIGHT_PTR2SNS_RAM_PARAM_ID                 (0xDF03005Cu)

#define CapSense_RIGHT_PTR2FLTR_HISTORY_VALUE               (CapSense_dsFlash.wdgtArray[3].ptr2FltrHistory)
#define CapSense_RIGHT_PTR2FLTR_HISTORY_OFFSET              (96u)
#define CapSense_RIGHT_PTR2FLTR_HISTORY_SIZE                (4u)
#define CapSense_RIGHT_PTR2FLTR_HISTORY_PARAM_ID            (0xD3030060u)

#define CapSense_RIGHT_PTR2DEBOUNCE_VALUE                   (CapSense_dsFlash.wdgtArray[3].ptr2DebounceArr)
#define CapSense_RIGHT_PTR2DEBOUNCE_OFFSET                  (100u)
#define CapSense_RIGHT_PTR2DEBOUNCE_SIZE                    (4u)
#define CapSense_RIGHT_PTR2DEBOUNCE_PARAM_ID                (0xD2030064u)

#define CapSense_RIGHT_STATIC_CONFIG_VALUE                  (CapSense_dsFlash.wdgtArray[3].staticConfig)
#define CapSense_RIGHT_STATIC_CONFIG_OFFSET                 (104u)
#define CapSense_RIGHT_STATIC_CONFIG_SIZE                   (4u)
#define CapSense_RIGHT_STATIC_CONFIG_PARAM_ID               (0xD1030068u)

#define CapSense_RIGHT_TOTAL_NUM_SNS_VALUE                  (CapSense_dsFlash.wdgtArray[3].totalNumSns)
#define CapSense_RIGHT_TOTAL_NUM_SNS_OFFSET                 (108u)
#define CapSense_RIGHT_TOTAL_NUM_SNS_SIZE                   (2u)
#define CapSense_RIGHT_TOTAL_NUM_SNS_PARAM_ID               (0x9F03006Cu)

#define CapSense_RIGHT_TYPE_VALUE                           (CapSense_dsFlash.wdgtArray[3].wdgtType)
#define CapSense_RIGHT_TYPE_OFFSET                          (110u)
#define CapSense_RIGHT_TYPE_SIZE                            (1u)
#define CapSense_RIGHT_TYPE_PARAM_ID                        (0x5B03006Eu)

#define CapSense_RIGHT_NUM_COLS_VALUE                       (CapSense_dsFlash.wdgtArray[3].numCols)
#define CapSense_RIGHT_NUM_COLS_OFFSET                      (111u)
#define CapSense_RIGHT_NUM_COLS_SIZE                        (1u)
#define CapSense_RIGHT_NUM_COLS_PARAM_ID                    (0x5D03006Fu)


#endif /* End CY_SENSE_CapSense_REGISTER_MAP_H */


/* [] END OF FILE */
