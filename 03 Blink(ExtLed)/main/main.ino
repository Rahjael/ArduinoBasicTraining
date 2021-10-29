
/* 
 *  LED_BUILTIN is a system constant for every Arduino board
 */

#define outputPinBlue 5
#define outputPinRed 3


void setup() {
  Serial.begin(9600);
  pinMode(outputPinBlue, OUTPUT); // Set the pin as output
  pinMode(outputPinRed, OUTPUT); // Set the pin as output

}

void loop() {

  // analogRead values go from 0 to 1023, analogWrite values from 0 to 255

  digitalWrite(outputPinBlue, HIGH);
  analogWrite(outputPinRed, 5);
  delay(500);
  
  digitalWrite(outputPinBlue, LOW);
  analogWrite(outputPinRed, 200);
  delay(500);
}
