void setup() {
  // he LED pins as outputs
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);

  delay(3000);

  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);

  delay(3000);

}
