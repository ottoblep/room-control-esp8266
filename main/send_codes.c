#include <math.h>


const int delaymicro=485;
const int switchingtime = 100;
const int GPIO_DEBO433MHZ_PIN = 10;
const int buttonpin = 7;
const int bluelight = 5;


//void send100(int n){
//  for (int a=1;a<=n;a++){
//  digitalWrite(GPIO_DEBO433MHZ_PIN,HIGH);
//  delayMicroseconds(delaymicro-switchingtime);
//  digitalWrite(GPIO_DEBO433MHZ_PIN,LOW);
//  delayMicroseconds(delaymicro-switchingtime);
//  delayMicroseconds(delaymicro);
//  delayMicroseconds(delaymicro);
//  }
//}
//void send110100(int n){
//  for (int a=1;a<=n;a++){
//  digitalWrite(GPIO_DEBO433MHZ_PIN,HIGH);
//  delayMicroseconds(delaymicro-switchingtime);
//  delayMicroseconds(delaymicro);
//  delayMicroseconds(delaymicro);
//  digitalWrite(GPIO_DEBO433MHZ_PIN,LOW);
//  delayMicroseconds(delaymicro-switchingtime);
//  digitalWrite(GPIO_DEBO433MHZ_PIN,HIGH);
//  delayMicroseconds(delaymicro-switchingtime);
//  digitalWrite(GPIO_DEBO433MHZ_PIN,LOW);
//  delayMicroseconds(delaymicro-switchingtime);
//  delayMicroseconds(delaymicro);
//  delayMicroseconds(delaymicro);
//  }
//}
//void chan1off(int n){
//  for (int a=1;a<=n;a++){
//    send100(3);
//    send110100(3);
//    send100(2);
//    send110100(6);
//    send100(2);
//  delay(11);
//  }
//}
//void chan1on(int n){
//  for (int a=1;a<=n;a++){
//    send100(3);
//    send110100(3);
//    send100(2);
//    send110100(7);
//  delay(11);
//  }
//}
//void blink(int n){
//        digitalWrite(bluelight,HIGH);
//        delay(n/2);
//        digitalWrite(bluelight,LOW);
//        delay(n/2);
//}

//void loop() {
//   
//   if (digitalRead(buttonpin)==LOW){
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