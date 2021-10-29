
#define ledPin 3
#define potPin A0

int sensorValue = 0;
int outputValue = 0;

void setup() {
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
  pinMode(potPin, INPUT);

}

void loop() {
  sensorValue = analogRead(potPin);
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(ledPin, outputValue);

  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);

  delay(10);
  

}
