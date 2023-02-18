#include <Arduino.h>

#define TOUCH_PIN   4

void setup(){
  Serial.begin(115200);
  Serial.print("Hello world");
}

void loop(){
  Serial.printf("%5d", touchRead(TOUCH_PIN));
  delay(500);
}