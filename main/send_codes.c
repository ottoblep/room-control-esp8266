#include "gpio.c"
#include "delay.c"
#include <math.h>


const int delaymicro=485;
const int switchingtime = 100;

void send100(int n){
  for (int a=1;a<=n;a++){
  gpio_set_level(GPIO_DEBO433MHZ_PIN,1);
  delayus(delaymicro-switchingtime);
  gpio_set_level(GPIO_DEBO433MHZ_PIN,0);
  delayus(delaymicro-switchingtime);
  delayus(2*delaymicro);
  }
}
void send110100(int n){
  for (int a=1;a<=n;a++){
  gpio_set_level(GPIO_DEBO433MHZ_PIN,1);
  delayus(delaymicro-switchingtime);
  delayus(2*delaymicro);
  gpio_set_level(GPIO_DEBO433MHZ_PIN,0);
  delayus(delaymicro-switchingtime);
  gpio_set_level(GPIO_DEBO433MHZ_PIN,1);
  delayus(delaymicro-switchingtime);
  gpio_set_level(GPIO_DEBO433MHZ_PIN,0);
  delayus(delaymicro-switchingtime);
  delayus(2*delaymicro);
  }
}
void chan1off(int n){
  for (int a=1;a<=n;a++){
    send100(3);
    send110100(3);
    send100(2);
    send110100(6);
    send100(2);
  delayus(11000);
  }
}
void chan1on(int n){
  for (int a=1;a<=n;a++){
    send100(3);
    send110100(3);
    send100(2);
    send110100(7);
  delayus(11000);
  }
}
//void blink(int n){
//        gpio_set_level(bluelight,1);
//        delay(n/2);
//        gpio_set_level(bluelight,0);
//        delay(n/2);
//}

//void loop() {
//   
//   if (digitalRead(buttonpin)==0){
//      if (sw==0){
//        blink(200);
//        chan1on(20);
//        blink(200);
//        sw=1;
//      }
//      else{
//        blink(200);
//        chan1off(20);
//        blink(200); 
//        blink(200);
//        sw=0;
//      }
//   }
//}
//