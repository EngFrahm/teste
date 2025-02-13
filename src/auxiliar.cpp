#include <Arduino.h>
#include "auxiliar.h"
#include "globais.h" // Acessa as variáveis globais

void incrementCounter() {
    globalCounter++;
    Serial.printf("Global Counter: %d\n", globalCounter);
}

void printGlobalMessage() {
    Serial.println(globalMessage);
    //
    globalCounter = 10;
}
