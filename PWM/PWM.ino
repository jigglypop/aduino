int led = 3;
int brightness = 0;
int increment = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(brightness > 255){
    Serial.println(brightness);
    increment = -1;
  }
  else if(brightness < 1){
    Serial.println(brightness);
    increment = 1;
  }
  brightness = brightness + increment;
  analogWrite(led,brightness);
  delay(10);

}
