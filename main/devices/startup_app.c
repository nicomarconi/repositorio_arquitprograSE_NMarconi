/** @addtogroup startup_app
 *  @{
 */

#include "include/startup_app.h"
#include "driver/gpio.h"
#include <string.h>
#include <unistd.h>


void welcome_message(void)
{

    lcd_put_cur(0, 0);
    lcd_send_string("Arquitectura y ");
    lcd_put_cur(1, 0);
    lcd_send_string("Prgrmacion de SE");
    usleep(3000000);
    lcd_clear();


    lcd_put_cur(0, 0);
    lcd_send_string("TF: Sensor de");
    lcd_put_cur(1, 0);
    lcd_send_string("Temprtura-Humdad");
    usleep(3000000);
    lcd_clear();

    lcd_put_cur(0, 2);
    lcd_send_string("Bioingeniero");
    lcd_put_cur(1, 0);
    lcd_send_string("Nicolas Marconi");
    usleep(3000000);
    lcd_clear();

}

void get_temp_humed(void)
{
    float buffer_tempe[10];
    float buffer_humed[10];
    dht11_t dht11_sensor;
    dht11_sensor.dht11_pin = CONFIG_DHT11_PIN;

    if(!dht11_read(&dht11_sensor, CONNECTION_TIMEOUT))
      {  
       
        lcd_put_cur(0, 2);
        sprintf(&buffer_tempe, "tempe = %.2f", dht11_sensor.temperature);
        lcd_send_string(&buffer_tempe);
        lcd_put_cur(1, 2);
        sprintf(&buffer_humed, "humed = %.2f", dht11_sensor.humidity);
        lcd_send_string(&buffer_humed);
      }
      usleep(5000000);
}
/** @}*/


