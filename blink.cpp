// Este programa se realizo con VScode y con la extension PlatformIO
#include <Arduino.h>

#define pinLED 2

void setup() {
  pinMode(pinLED, OUTPUT);
}

void loop() {
  digitalWrite(pinLED, HIGH);
  delay(300);
  digitalWrite(pinLED, LOW);
  delay(300);
}
