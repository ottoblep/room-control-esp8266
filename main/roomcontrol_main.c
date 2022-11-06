#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_log.h"
#include "esp_netif.h"
#include "nvs.h"
#include "nvs_flash.h"

#include "lwip/err.h"
#include "lwip/sys.h"

#include "udp_server.c"
#include "gpio.c"

void app_main()
{
    ESP_ERROR_CHECK(nvs_flash_init());

    gpio_init();
    wifi_init_sta();
    xTaskCreate(udp_server_task, "udp_server", 4096, NULL, 5, NULL);
}
