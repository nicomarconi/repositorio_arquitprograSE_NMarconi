/** @addtogroup startup_app
 *  @{
 *  @file startup_app.h
 *  @date 20/07/2024
 */

#ifndef STARTUP_APP
#define STARTUP_APP

#include "include/dht11_app.h"
#include "include/i2c_app.h"
#include "include/lcd_app.h"
/**
 * \brief This function shows on the LCD screen some general information as,
 *         project's name, project's author,and so on.
 */
void welcome_message(void);


/**
 * \brief This function is inide of a while loop and shows on the LCD screen 
 *        the temperature and humedity current values.
 */
void get_temp_humed(void);

/** 
*@}
*/

#endif /*STARTUP_APP*/
