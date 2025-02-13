#include <Arduino.h>
#include <auxiliar.h>   // Funções auxiliares
#include <globais.h>    // Variáveis globais
#include <teste.h>   // Funções auxiliares

void setup() {
    Serial.begin(115200);

    // Inicialização de variáveis globais
    globalCounter = 0;
    globalMessage = "Hello from ESP32!";

    // Testando função auxiliar
    printGlobalMessage();
}

void loop() {
    incrementCounter(); // Incrementa o contador global
    delay(1000);        // Aguarda 1 segundo
    global = 2;
    Serial.println(global);
    teste();
}
