
/* 
 *  LED_BUILTIN is a system constant for every Arduino board
 */

#define ledPin 9

int fadeAmount = 5;
int brightness = 0;


void setup() {
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
}

void loop() {
  analogWrite(ledPin, brightness);

  brightness += fadeAmount;

  if(brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }

  delay(50);

}
