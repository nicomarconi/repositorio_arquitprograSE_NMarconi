
/** @addtogroup i2c_app
 *  @{
 *  @file i2c_app.h
 *  @date 07/20/2024
 */


#ifndef I2C_APP
#define I2C_APP
#include "driver/i2c.h" 
#include "esp_check.h"

/**
 *  @brief The **i2c_master_init()** function will initialise the I2C protocol in the master mode, 
 *   doing the folllowing steps:
 *
 *   - **1º) Configuration:** will set the initialization parameters of the structure **i2c_config_t conf{}** 
 *           (master or slave mode,GPIO pins for SDA and SCL, clock speed, etc.).
 *   - **2º) Set the configuration:** will write the values that were set in step 1º.
 *           using the esp-idf function **i2c_param_config()**, icluded in the directory
 *           (esp/esp-idf/components/driver/i2c/include/driver/i2c.h).
 *   - **3º) Install driver:** will install the diver, using the esp-idf function **i2c_driver_install()**
 *           ,included in the directory (esp/esp-idf/components/driver/i2c/include/driver/i2c.h).
         
 *
 */
   esp_err_t i2c_master_init(void);

/**
 *  @brief The i2c_param_config  function will write the parameters that were set.
 *  @param[in] i2c_master_port  is the I2C instance we are using, I2C_NUM_0
 *  @param[in] conf pointer to I2C parameter settings
*/
 esp_err_t i2c_param_config(i2c_port_t i2c_master_port,const i2c_config_t *conf);

/**
 *  @brief The i2c_driver_install   function will install the driver
 *  @param[in] i2c_num  is the I2C instance we are using, I2C_NUM_0
 *  @param[in] mode the I2C mode, which is master in this case.
 *  @param[in] slv_rx_buf_len the size of the RX and TX buffers. 
 *  @param[in] slv_tx_buf_len the buffers are only needed if the ESP32 is being used in the 
 *              slave mode. Since we are using it as a master, we will keep these buffers as 0.
 *  @param[in] intr_alloc_flags is to set the interrupt flag for the I2C. We will keep it as 0 too,
                since we are not using any interrupts
    @note void i2c_driver_install(I2C_NUM_0, conf.mode, 0, 0, 0);
*/
 esp_err_t  i2c_driver_install(i2c_port_t i2c_num, i2c_mode_t mode, size_t slv_rx_buf_len, size_t slv_tx_buf_len,
                             int intr_alloc_flags);

/**
 * @}
 */
#endif /*I2C_APP*/


