#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "esp_log.h"
#include "driver/gpio.h"
#include "driver/hw_timer.h"

bool continuetrigger;

void hw_timer_callback1(void *arg)
{
    continuetrigger = true;
}

void delayus(uint32_t us_delay)
{
    continuetrigger = false;
    hw_timer_alarm_us(us_delay, false);
    while(continuetrigger==false) __asm__ __volatile__ ("nop");
}

void initDelay(){
    hw_timer_init(hw_timer_callback1, NULL);
}



