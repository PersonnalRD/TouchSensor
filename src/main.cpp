#include <Arduino.h>

#define TOUCH_PIN   4
#define THRESHOLD   35
int count = 0;

void handleTouch(){
  /*Serial.printf("Touch detected with threshold %d\n", THRESHOLD);*/
  Serial.printf("%5d;%5d\n", ++count, touchRead(TOUCH_PIN));
}

void setup(){
  Serial.begin(115200);
  /*touchAttachInterrupt(TOUCH_PIN, handleTouch, THRESHOLD);*/
}

void loop(){
  Serial.printf("%5d;%5d\n", ++count, touchRead(TOUCH_PIN));
  /*Serial.printf("%5d\n", touchRead(TOUCH_PIN));
  delay(500);*/
}