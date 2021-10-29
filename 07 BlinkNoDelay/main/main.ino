
/* 
 *  LED_BUILTIN is a system constant for every Arduino board
 */

const unsigned long msInterval = 50;
unsigned long previousMs = 0;
unsigned long currentMs = 0;
int ledState = LOW;


void setup() {
  Serial.begin(9600);

  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  currentMs = millis();

  if(currentMs - previousMs >= msInterval) {
    previousMs = currentMs;

    if(ledState == LOW) {
      ledState = HIGH;
    }
    else {
      ledState = LOW;
    }

    digitalWrite(LED_BUILTIN, ledState);
  }

  
  

}
