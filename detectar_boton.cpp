// Este programa se realizo con VScode y con la extension PlatformIO
#include <Arduino.h>

#define pinLED 2
#define pinBOTON 4

void setup () {
    pinMode(pinBOTON, INPUT_PULLUP);
    pinMode(pinLED, OUTPUT);
}

void loop() {
    if (digitalRead(pinBOTON) == LOW) {
        digitalWrite(pinLED, HIGH);
    } else {
        digitalWrite(pinLED, LOW);
    }
}
