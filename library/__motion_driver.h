/*
    __motion_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __motion_driver.h
@brief    MOTION Driver
@mainpage MOTION Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   MOTION
@brief      MOTION Click Driver
@{

| Global Library Prefix | **MOTION** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **May 2018.**      |
| Developer             | **Nenad Filipovic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _MOTION_H_
#define _MOTION_H_

/** 
 * @macro T_MOTION_P
 * @brief Driver Abstract type 
 */
#define T_MOTION_P    const uint8_t*

/** @defgroup MOTION_COMPILE Compilation Config */              /** @{ */

//  #define   __MOTION_DRV_SPI__                            /**<     @macro __MOTION_DRV_SPI__  @brief SPI driver selector */
//  #define   __MOTION_DRV_I2C__                            /**<     @macro __MOTION_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __MOTION_DRV_UART__                           /**<     @macro __MOTION_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup MOTION_VAR Variables */                           /** @{ */



                                                                       /** @} */
/** @defgroup MOTION_TYPES Types */                             /** @{ */



                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup MOTION_INIT Driver Initialization */              /** @{ */

#ifdef   __MOTION_DRV_SPI__
void motion_spiDriverInit(T_MOTION_P gpioObj, T_MOTION_P spiObj);
#endif
#ifdef   __MOTION_DRV_I2C__
void motion_i2cDriverInit(T_MOTION_P gpioObj, T_MOTION_P i2cObj, uint8_t slave);
#endif
#ifdef   __MOTION_DRV_UART__
void motion_uartDriverInit(T_MOTION_P gpioObj, T_MOTION_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void motion_gpioDriverInit(T_MOTION_P gpioObj);
                                                                       /** @} */
/** @defgroup MOTION_FUNC Driver Functions */                   /** @{ */

/**
  Function will return 1 if a motion is detected.
*/
uint8_t motion_detected();

/**
   Function places the sensor in detection mode.
*/
void motion_enable();

/**
     Function disables the sensor.
*/
void motion_disable();






                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_MOTION_STM.c
    @example Click_MOTION_TIVA.c
    @example Click_MOTION_CEC.c
    @example Click_MOTION_KINETIS.c
    @example Click_MOTION_MSP.c
    @example Click_MOTION_PIC.c
    @example Click_MOTION_PIC32.c
    @example Click_MOTION_DSPIC.c
    @example Click_MOTION_AVR.c
    @example Click_MOTION_FT90x.c
    @example Click_MOTION_STM.mbas
    @example Click_MOTION_TIVA.mbas
    @example Click_MOTION_CEC.mbas
    @example Click_MOTION_KINETIS.mbas
    @example Click_MOTION_MSP.mbas
    @example Click_MOTION_PIC.mbas
    @example Click_MOTION_PIC32.mbas
    @example Click_MOTION_DSPIC.mbas
    @example Click_MOTION_AVR.mbas
    @example Click_MOTION_FT90x.mbas
    @example Click_MOTION_STM.mpas
    @example Click_MOTION_TIVA.mpas
    @example Click_MOTION_CEC.mpas
    @example Click_MOTION_KINETIS.mpas
    @example Click_MOTION_MSP.mpas
    @example Click_MOTION_PIC.mpas
    @example Click_MOTION_PIC32.mpas
    @example Click_MOTION_DSPIC.mpas
    @example Click_MOTION_AVR.mpas
    @example Click_MOTION_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __motion_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */