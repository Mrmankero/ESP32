// Este programa fue creado desde VScode con PlatformIO
#include <Arduino.h>

// Creamos las variables de leds y potenciometro
// El potenciometro actuara como un sensor de temperatura

const int pote = 13;
const int rojo = 15;
const int verde = 4;

// Configuramos los pines
void setup() {
    pinMode(pote, INPUT);
    pinMode(rojo, OUTPUT);
    pinMode(verde, OUTPUT);

    // Inicializamos el monitor
    Serial.begin(9600);
}

void loop() {
    // Deteccion del potenciometro
    int valor1 = analogRead(pote);
    
    // Definimos un nuevo valor de 0 a 255 del potenciometro
    int valor2 = map(valor1, 0, 4095, 0, 255);

    if (valor2 < 160) {
        digitalWrite(rojo, LOW);
        digitalWrite(verde, HIGH);
        delay(500);
        digitalWrite(verde, LOW);
        delay(500);
    } else {
        digitalWrite(verde, LOW);
        digitalWrite(rojo, HIGH);
        delay(200);
        digitalWrite(rojo, LOW);
        delay(200);
    }

    Serial.print("Valor pote: ");
    Serial.println(valor2);

    delay(20);
}
