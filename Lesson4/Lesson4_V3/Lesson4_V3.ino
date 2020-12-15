
int readValue = 0;
int writeValue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT); 
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  readValue = analogRead(A0);
  writeValue = readValue/4;

  if(readValue <= 340){
    analogWrite(11,writeValue);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
  }else if(readValue > 340 && readValue <= 680){
    analogWrite(11,writeValue);
    analogWrite(10,writeValue);
    digitalWrite(9,LOW);
  }else if(readValue > 680 && readValue <=1022){
    analogWrite(11,writeValue);
    analogWrite(10,writeValue);
    analogWrite(9,writeValue);
  }else if(readValue > 1022){
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    delay(250);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    delay(250);
  }

  

  

  Serial.print(readValue);
  Serial.print(" : ");
  Serial.println(writeValue);

  delay(100);
}
