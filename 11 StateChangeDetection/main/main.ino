
/* 
 *  LED_BUILTIN is a system constant for every Arduino board
 */

#define ledPin LED_BUILTIN
#define inputPin 10


int buttonPushCounter = 0;
int buttonState = 0;
int lastButtonState = 0;

void setup() {
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
}

void loop() {
  buttonState = digitalRead(inputPin);

  if(buttonState != lastButtonState) {
    if(buttonState == HIGH) {
      buttonPushCounter++;
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(buttonPushCounter);
    }
    else {
      Serial.println("off");
    }
    delay(50);
  }
  lastButtonState = buttonState;

  if(buttonPushCounter % 4 == 0) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}
