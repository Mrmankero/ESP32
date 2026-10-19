// Este programa se realizo con VScode y con la extension PlatformIO
#include <Arduino.h>

const int pinLed = 4;

void setup() {
    pinMode(pinLed, OUTPUT);
    Serial.begin(9600);
    while(!Serial);
}


void loop() {

    // El programa se detiene y va imprimiendo en el monitor, pero no avanza hasta que Serial.available() sea mayor a 0
    while (Serial.available() == 0) {
        Serial.println("Presione 1 para encenderlo y 0 para apagar: ");
        delay(1000);
    }
    
    // char dato = Serial.read();
    // string dato = Serial.readString();
    // float dato = Serial.parseFloat();

    // Una vez que escribes algo, el programa lo lee
    int dato = Serial.parseInt();

    // Comprueba ese numero que le pasaste por medio del monitor
    if (dato == 1) {
        digitalWrite(pinLed, HIGH);
    } else {
        digitalWrite(pinLed, LOW);
    }

    delay(500);
}
