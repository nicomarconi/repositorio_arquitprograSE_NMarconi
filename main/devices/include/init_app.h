/** @addtogroup init_app
 *  @ingroup APP_TEMP_HUME_DRIVERS
 *  @{
 *  @file init_app.h
 *  @date 07/20/2024
 */

#ifndef INIT_APP
#define INIT_APP

#include "include/i2c_app.h"
#include "include/lcd_app.h"

/**
 *  @brief This function involves initialitation routines for devices as,
 *  LCD screen and its i2c comuniication protcol
 *  with the microcontroler.
 */
void init_devices(void);
/** 
*@}
*/

#endif /*INIT_APP*/

