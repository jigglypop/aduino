void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT_PULLUP);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  boolean sw = false;
  while(sw==digitalRead(2));
  digitalWrite(13,LOW);
  delay(3000);
  digitalWrite(12,HIGH);

}
