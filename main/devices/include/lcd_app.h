/** @addtogroup LCD_APP
 *  @{
 *  @file lcd_app.h
 *  @date 07/20/2024
 */


#ifndef LCD_APP
#define LCD_APP

#define SLAVE_ADDRESS_LCD 0x27  /**< Address of PCF8574*/
/**
 *  @brief This function calls inside initialitation functions  for LCD and i2c comunication protcol.
 *  
 *  To follow the initialitation steps go to figure 24 in the datasheet.
 *  In order to initialise the LCD, we need to send some set of commands.
 *  In order to send the command or data to the LCD, we need to follow some set of steps
 *  - Set/Reset the data pins (D0 – D7) with respect to what data we want to write.
 *  - Send a strobe signal, which is basically setting the ENABLE pin, and then Resetting it. 
 */
void lcd_init (void);



/**
 *  @brief the function **lcd_put_cur()** lcd_put_cur is used to put the cursor at 
 *  the respective location on the LCD. 
 *  @param row row where set the cursor. 
 *  @param col row where set the cursor.
 *
 *  - As we already know, the LCD1602 have 2 Rows (0-1)
 *    and 16 Columns (0-15).The DDRAM Address for the LCD1602 starts from the 0x80. 
 *  - So If we tell LCD to put the cursor at 0x80, it will basically put it in the 
 *    beginning of the Top Row. 
 *  - Then the next Position will be 0x81, 0x82 and so on, upto 0x8F.The beginning of the bottom 
 *    row starts from 0xC0, and goes all the way upto 0xCF.
 *  - For example, If i want to put the cursor at the position (0,5), then the code will add 0x80 
 *    and 0x05, making it 0x85 and send this command to the LCD.
 *  - After we put the cursor at certain location, we can send the data to it, 
 *    which will be displayed on the LCD.
 *  
 */
void lcd_put_cur(int row, int col);

/**
*   @brief LCD 1602 have a command to clear the entire screen.
*   
*   - **0x01** can be used to clear the entire screen and set.
*   - The cursor to the beginning, i.e at the 0x80 location. 
*   - The command needs some time to execute, and therefore we have to provide some delay.
*/

void lcd_clear (void);

/**
* @brief lcd_send_string can be used to send a character string, 
*        or a buffer (containing characters) to the display. 
*/

void lcd_send_string (char *str);
/** 
*@}
*/
#endif /*LCD_APP*/
