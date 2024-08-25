
/*! \mainpage Final Project "Humedity and Temperature sensing system based in ESP32 WROOM-32"
 * \date 07/20/2024
 * \author Bioengineer Nicolás Marconi Irigoytia
 * \section genDesc General Description
 *
 * Final Project for the Course **Embedded Systems Programming and Architecture**.
 * It involves the sensing and visualization of temperature  
 * and humidity values. The project uses the Espressif ESP32 WROOM module, 
 * the DHT11 humidity sensor, and a LCD screen.
 *
 *\section someinformation Hardware setup
 * For running this firmware it is necesary, DHT11 sensor, LCD screen with  
 * Expansor module PCF8574AT chip, and ESP32_WROOM module kit.
 *
 * \section changelog Documents changes
 *
 * |   Date     | Description                                    |
 * |:----------:|:-----------------------------------------------|
 * | 07/20/2024 | Document creation                              |
 * 
 */


#include "devices/include/init_app.h"
#include "devices/include/startup_app.h"


void app_main(void)
{
  init_devices();
  welcome_message();

  while(1)
  
  get_temp_humed();
  
}
