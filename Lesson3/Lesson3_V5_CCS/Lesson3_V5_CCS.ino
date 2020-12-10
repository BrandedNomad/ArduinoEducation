void setup() {
  // set the LED pins as outputs:
  pinMode(3,OUTPUT); //declare pin 3 (green LED) as output
  pinMode(4,OUTPUT); //declare pin 4 (yellow LED) as output
  pinMode(5,OUTPUT); //declare pin 5 (red LED) as output
  pinMode(2,INPUT); //declare pin 2 (push button) as input
 

}

void loop() {

  if (digitalRead(2) == HIGH) {
    
  digitalWrite(3,HIGH);//Turns ON Green LED on pin 3
  digitalWrite(4,LOW);//Turns OFF Yellow LED on pin 4
  digitalWrite(5,LOW);//Turns OFF Red LED on pin 5
 
  delay(300);

  digitalWrite(3,LOW);//Turns OFF Green LED on pin 3
  digitalWrite(4,LOW);//Turns OFF Yellow LED on pin 4
  digitalWrite(5,LOW);//Turns OFF Red LED on pin 5

  delay(300);
  
  }else {
  // put your main code here, to run repeatedly:
  digitalWrite(3,HIGH);//Turns ON Green LED on pin 3
  digitalWrite(4,LOW);//Turns OFF Yellow LED on pin 4
  digitalWrite(5,LOW);//Turns OFF Red LED on pin 5

  delay(1000);

  digitalWrite(3,LOW);//Turns OFF Green LED on pin 3
  digitalWrite(4,HIGH);//Turns ON Yellow LED on pin 4
  digitalWrite(5,LOW);//Turns OFF Red LED on pin 5

  delay(1000);

  digitalWrite(3,LOW);//Turns OFF Green LED on pin 3
  digitalWrite(4,LOW);//Turns OFF Yellow LED on pin 4
  digitalWrite(5,HIGH);//Turns ON Red LED on pin 5

  delay(1000);
  }


}
