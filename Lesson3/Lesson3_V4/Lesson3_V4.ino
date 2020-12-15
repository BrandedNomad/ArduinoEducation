void setup() {
  // he LED pins as outputs
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(2,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(2) == LOW){
    digitalWrite(5,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(3,LOW);
  
    delay(1000);
  
    digitalWrite(5,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(3,LOW);
  
    delay(1000);
  
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);
    digitalWrite(3,HIGH);
  
    delay(1000);
  }else{
    digitalWrite(5,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(3,LOW);
  }
  

}
