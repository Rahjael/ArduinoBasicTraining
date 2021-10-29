
/* 
 *  LED_BUILTIN is a system constant for every Arduino board
 */

#define inputPin 2

int sensorValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(inputPin, INPUT);

}

void loop() {

  sensorValue = digitalRead(inputPin);
  Serial.println(sensorValue);
  delay(200);
}
