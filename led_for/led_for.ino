int ledPins[] = {2,3,4};

void setup() {
  Serial.begin(9600);
  for (int i=0; i<=2;i++){
    pinMode(ledPins[i],OUTPUT);
  }
}

void loop() {
  for (int i=0; i<=2;i++){
    Serial.println(i);
    digitalWrite(ledPins[i],HIGH);
    delay(100);
  }
  for (int i=2; i>=0;i--){
    Serial.println(i);
    digitalWrite(ledPins[i],LOW);
    delay(100);
  }
}
