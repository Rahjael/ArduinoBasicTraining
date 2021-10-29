
/* 
 *  LED_BUILTIN is a system constant for every Arduino board
 */

#define ledPin LED_BUILTIN
#define inputPin 3

void setup() {
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
}

void loop() {

  if(digitalRead(inputPin) == HIGH) {
    digitalWrite(ledPin, LOW);
  }
  else {
    digitalWrite(ledPin, HIGH);
  }


}
