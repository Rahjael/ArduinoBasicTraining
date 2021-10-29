
/* 
 *  LED_BUILTIN is a system constant for every Arduino board
 */


void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT); // Set the pin as output
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(50);
  digitalWrite(LED_BUILTIN, LOW);
  delay(50);
}
