/** @addtogroup dht11_app
 *  @{
 *  @file dht11_app.h
 *  @date 07/20/2023
 */
#ifndef DHT11_APP
#define DHT11_APP

#define CONFIG_DHT11_PIN 33   /*!< ESP32 WROOM number pin to connect the dht11 data pin */
#define CONNECTION_TIMEOUT 5  /*!<the number of connection attempts before declaring a timeout */


/**
 * @brief Structure containing readings and info about the dht11
*/
typedef struct
{
    int dht11_pin;      /*!< ESP32 WROOM number pin to connect the dht11 data pin */
    float temperature;  /*!< variable to store the last temperature reading  */
    float humidity;     /*!< variable to store the last humedity reading  */
} dht11_t;

/**
 * @brief Wait on pin until it reaches the specified state
 * @return returns either the time waited or -1 in the case of a timeout
 * @param state state to wait for
 * @param timeout if counter reaches timeout the function returns -1
*/
int wait_for_state(dht11_t dht11,int state,int timeout);
/**
 * @brief Holds the pin low fo the specified duration
 * @param hold_time_us time to hold the pin low for in microseconds
*/
void hold_low(dht11_t dht11,const int hold_time_us);
/**
 * @brief The function for reading temperature and humidity values from the dht11
 * @note  This function is blocking, ie: it forces the cpu to busy wait for the duration necessary to finish comms with the sensor.
 * @note  Wait for atleast 2 seconds between reads 
 * @param connection_timeout the number of connection attempts before declaring a timeout
*/
int dht11_read(dht11_t *dht11,int connection_timeout);

/**
 * @}
 */
#endif /*DHT11_APP*/

