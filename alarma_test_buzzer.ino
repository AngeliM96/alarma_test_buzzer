#include "pitches.h"

#define pinBuzzer 14 

void setup() {
  pinMode(pinBuzzer, OUTPUT);            // Inicia Buzzer
}

void loop() {
  // no need to repeat the melody.
//  alarma(NOTE_C4);
//  alarma(NOTE_C5);
//  alarma(NOTE_C6);
//  alarma(NOTE_C8);
  alarma(NOTE_C7);
}

void alarma(int nota) {
  for(int i=0; i<10; i++)
  {
    tone(pinBuzzer, nota, 250);   // Hago sonar el buzzer, 523 corresponde a la nota C5
    delay(250);                  // Espero lo que dura la nota
    noTone(pinBuzzer);                    // Silencio el buzzer
    delay(250);                  // Delay entre alarmas
  }
}
