// Este programa fue realizado con VScode y con la extension PlatformIO
#include <Arduino.h>

const int pinPot = 4;
const int pinLed = 15;

void setup() {
    pinMode(pinPot, INPUT);
    pinMode(pinLed, OUTPUT);
    Serial.begin(9600);
}

int brillo = 0;

void loop() {
    int valorPot = analogRead(pinPot);

    Serial.print("Valor pote: ");
    Serial.println(pinPot);

//    int brillo = valorPot / 16;
    int brillo = map(valorPot, 0, 4095, 0, 255);
    analogWrite(pinLed, brillo);

    delay(50);
}
