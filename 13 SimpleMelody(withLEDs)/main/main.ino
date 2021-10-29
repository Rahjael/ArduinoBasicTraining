

#include "notes.h"

#define outputPin 13

#define Gpin 3
#define Apin 4
#define Bpin 5
#define Cpin 6
#define Dpin 7
#define Epin 8
#define Fpin 9




int melody[] = {NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4};


int bachMelody[] = {
  0,
  NOTE_G3,
  NOTE_A3,
  NOTE_B3,
  NOTE_D4,
  NOTE_C4,
  NOTE_C4,
  NOTE_E4,
  NOTE_D4,

  NOTE_D4,
  NOTE_G4,
  NOTE_FS4,
  NOTE_G4,
  NOTE_D4,
  NOTE_B3,
  NOTE_G3,
  NOTE_A3,
  NOTE_B3,

  NOTE_C4,
  NOTE_D4,
  NOTE_E4,
  NOTE_D4,
  NOTE_C4,
  NOTE_B3,
  NOTE_A3,
  NOTE_B3,
  NOTE_G3,

  NOTE_FS3,
  NOTE_G3,
  NOTE_A3,
  NOTE_D3,
  NOTE_FS3,
  NOTE_A3,
  NOTE_C4,
  NOTE_B3,
  NOTE_A3,

  NOTE_B3,
  NOTE_G3,
  NOTE_A3,
  NOTE_B3,
  NOTE_D4,
  NOTE_C4,
  NOTE_C4,
  NOTE_E4,
  NOTE_D4,

  NOTE_D4,
  NOTE_G4,
  NOTE_FS4,
  NOTE_G4,
  NOTE_D4,
  NOTE_B3,
  NOTE_G3,
  NOTE_A3,
  NOTE_B3,

  NOTE_E3,
  NOTE_D4,
  NOTE_C4,
  NOTE_B3,
  NOTE_A3,
  NOTE_G3,
  NOTE_D3,
  NOTE_G3,
  NOTE_FS3,

  NOTE_G3,
  NOTE_B3,
  NOTE_D4,
  NOTE_G4,
  NOTE_D4,
  NOTE_B3,
  NOTE_G3,
  NOTE_B3,
  NOTE_D4,

  NOTE_G3  
};

int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4};

void setup() {
  Serial.begin(9600);
  
  const int constDuration = 6;

  pinMode(Cpin, OUTPUT);
  pinMode(Dpin, OUTPUT);
  pinMode(Epin, OUTPUT);
  pinMode(Fpin, OUTPUT);
  pinMode(Gpin, OUTPUT);
  pinMode(Apin, OUTPUT);
  pinMode(Bpin, OUTPUT);

  
  for(int thisNote = 0; thisNote < 73; thisNote++) {

    digitalWrite(Cpin, LOW);
    digitalWrite(Dpin, LOW);
    digitalWrite(Epin, LOW);
    digitalWrite(Fpin, LOW);
    digitalWrite(Gpin, LOW);
    digitalWrite(Apin, LOW);
    digitalWrite(Bpin, LOW);

    
    int noteDuration = 1000 / constDuration;

    if(bachMelody[thisNote] == NOTE_G3 || bachMelody[thisNote] == NOTE_G4) {
      digitalWrite(Gpin, HIGH);
    }
    else if(bachMelody[thisNote] == NOTE_A3 || bachMelody[thisNote] == NOTE_A4) {
      digitalWrite(Apin, HIGH);
      Serial.println("ok"); 
    }
    else if(bachMelody[thisNote] == NOTE_B3 || bachMelody[thisNote] == NOTE_B4) {
      digitalWrite(Bpin, HIGH);      
    }
    else if(bachMelody[thisNote] == NOTE_C3 || bachMelody[thisNote] == NOTE_C4) {
      digitalWrite(Cpin, HIGH);      
    }
    else if(bachMelody[thisNote] == NOTE_D3 || bachMelody[thisNote] == NOTE_D4) {
      digitalWrite(Dpin, HIGH);      
    }
    else if(bachMelody[thisNote] == NOTE_E3 || bachMelody[thisNote] == NOTE_E4) {
      digitalWrite(Epin, HIGH);      
    }
    else if(bachMelody[thisNote] == NOTE_FS3 || bachMelody[thisNote] == NOTE_FS4) {
      digitalWrite(Fpin, HIGH);
    }
    
    tone(outputPin, bachMelody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration;
    delay(pauseBetweenNotes);
    noTone(outputPin);
  }


  Serial.println("End");
}


void loop() {
}
