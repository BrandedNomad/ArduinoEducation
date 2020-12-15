
int readValue = 0;
int writeValue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT); 
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  readValue = analogRead(A0);
  writeValue = readValue/4;

  analogWrite(9,writeValue);
  analogWrite(10,writeValue);
  analogWrite(11,writeValue);
  

}
