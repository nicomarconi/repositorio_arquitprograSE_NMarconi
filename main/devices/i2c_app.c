/** @addtogroup i2c_app
 *  @{
 */

#include "include/i2c_app.h"
//#include "esp_log.h"
//#include <stdio.h>

esp_err_t i2c_master_init(void)
{
	int i2c_master_port = I2C_NUM_0;

    i2c_config_t conf = {
        .mode = I2C_MODE_MASTER,
        .sda_io_num = GPIO_NUM_21,
        .scl_io_num = GPIO_NUM_22,
        .sda_pullup_en = GPIO_PULLUP_ENABLE,
        .scl_pullup_en = GPIO_PULLUP_ENABLE,
        .master.clk_speed = 100000,
    };

      i2c_param_config(i2c_master_port, &conf);

      return i2c_driver_install(i2c_master_port, conf.mode, 0, 0, 0);
}
/** @}*/