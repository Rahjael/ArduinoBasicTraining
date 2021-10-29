
/* 
 *  LED_BUILTIN is a system constant for every Arduino board
 */

#define ledPin LED_BUILTIN
#define inputPin 9


int ledState = HIGH;
int buttonState;
int lastButtonState = LOW;

unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

void setup() {
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);

  digitalWrite(ledPin, ledState);
}

void loop() {

  int reading = digitalRead(inputPin);
  
  if(reading != buttonState) {
    buttonState = reading;

    if(buttonState == HIGH) {
      ledState = !ledState;
    }
  }

  digitalWrite(ledPin, ledState);

  lastButtonState = reading;

}
