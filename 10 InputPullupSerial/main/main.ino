
/* 
 *  LED_BUILTIN is a system constant for every Arduino board
 */

#define ledPin LED_BUILTIN
#define inputPin 5

void setup() {
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
}

void loop() {
  int sensorVal = digitalRead(inputPin);

  Serial.println(sensorVal);

  if(sensorVal == HIGH) {
    digitalWrite(ledPin, LOW);
  }
  else {
    digitalWrite(ledPin, HIGH);
  }

  delay(300);

}
