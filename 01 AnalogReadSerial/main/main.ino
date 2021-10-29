

#define sensorPin A0

int sensorValue = 0;
String powerBar = "";
char barSymbol = '#';


String drawBar(unsigned long value) {  
  Serial.println(value);
  String str = "";
  value = value * 100 / 1023; // Using a long int is necessary to prevent overflow in this line
  for(int i = 1; i <= value; i++) {
    str += barSymbol;
  }
  //Serial.println(value);
  return str;
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  powerBar = drawBar(sensorValue);
  Serial.println(powerBar);
  delay(300);
}
