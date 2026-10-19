// Este programa se realizo con VScode y con la extension PlatformIO
#include <Arduino.h>

// Creamos variables para los pines de los led y el potenciometro
const int rojo = 15;
const int amarillo = 2;
const int verde = 4;
const int pote = 13;

// Configuramos esos pines
void setup() {
    pinMode(rojo, OUTPUT);
    pinMode(amarillo, OUTPUT);
    pinMode(verde, OUTPUT);
    pinMode(pote, INPUT);

    Serial.begin(9600);
}

// Configuramos el programa para el esp32
void loop() {
    // Analizamos la entrada analogica del potenciometro
    int valor_pote = analogRead(pote);
    int brillo = map(valor_pote, 0, 4095, 0, 255);

    if (brillo <= 127) {
        analogWrite(verde, brillo);
        analogWrite(amarillo, LOW);
        analogWrite(rojo, LOW);
    } else if (brillo <= 190) {
        analogWrite(verde, LOW);
        analogWrite(amarillo, brillo);
        analogWrite(rojo, LOW);
    } else {
        analogWrite(verde, LOW);
        analogWrite(amarillo, LOW);
        analogWrite(rojo, brillo);
    }

    Serial.print("Valor pote: ");
    Serial.println(brillo);

    delay(100);
}
