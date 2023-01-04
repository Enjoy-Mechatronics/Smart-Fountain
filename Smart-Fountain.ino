int sensorPin = 7;
int basePin = 9;

void setup() {
  pinMode(sensorPin, INPUT);

  pinMode(basePin, OUTPUT);  
  digitalWrite(basePin, LOW);
}

void loop() {
  int sensorData = digitalRead(sensorPin);
  
  if(sensorData == 1){
    digitalWrite(basePin, HIGH);
    delay(45);
    digitalWrite(basePin, LOW);
  }
  
}





