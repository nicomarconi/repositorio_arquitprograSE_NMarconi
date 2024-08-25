/** @addtogroup init_app
 *  @{
 */
#include "include/init_app.h"
#include "esp_log.h"
static const char *TAG = "i2c-simple-example";

void init_devices(void)
{
    ESP_ERROR_CHECK(i2c_master_init());
    ESP_LOGI(TAG, "I2C initialized successfully");
    lcd_init();
}
/** @}*/
