/*#include <Arduino.h>

#define POT 15
#define BOTON 4
#define LED1 2
#define LED2 17


void setup() {
    pinMode(POT, INPUT);
    pinMode(BOTON, INPUT_PULLDOWN);
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);

    Serial.begin(9600);
}

void loop() {
    // Creamos una variable para detectar el potenciometro
    int valor_pot = analogRead(POT);
    int brillo = map(valor_pot, 0, 4095, 0, 255);
    Serial.print("Valor potenciometro: ");
    Serial.println(valor_pot);

    // Creamos una variable para detectar el boton
    int valor_boton = digitalRead(BOTON);
    Serial.print("Valor boton: ");
    Serial.println(valor_boton);

    // Boton enciende el azul
    if (valor_boton) {
        digitalWrite(LED1, HIGH);
    } else {
        digitalWrite(LED1, LOW);
    }

    // Potenciometro enciende el rojo por PWM
    analogWrite(LED2, brillo);

    delay(100);
}
*/