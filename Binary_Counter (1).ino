int redLED8 = 2;
int yellowLED4 = 4;
int greenLED2 = 6;
int whiteLED1 = 8;
int smallW = 500;
int longW = 800;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED8,OUTPUT);
  pinMode(yellowLED4,OUTPUT);
  pinMode(greenLED2,OUTPUT);
  pinMode(whiteLED1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(whiteLED1,HIGH); 
  delay(smallW);
  digitalWrite(whiteLED1,LOW);
  delay(smallW) ; 
  // represents 1
  delay(longW) ;
  
  digitalWrite(greenLED2,HIGH); 
  delay(smallW);
  digitalWrite(greenLED2,LOW);
  delay(smallW) ;
  //represents 2 
  delay(longW) ;

    digitalWrite(whiteLED1,HIGH); 
    digitalWrite(greenLED2,HIGH); 
  delay(smallW);
  digitalWrite(whiteLED1,LOW);
  digitalWrite(greenLED2,LOW);
  delay(smallW) ;
  // represents 3
  delay(longW) ;

   digitalWrite(yellowLED4,HIGH); 
  delay(smallW);
  digitalWrite(yellowLED4,LOW);
  delay(smallW) ; 
  // represents 4

  delay(longW) ;
   digitalWrite(yellowLED4,HIGH); 
    digitalWrite(whiteLED1,HIGH); 
  delay(smallW);
  digitalWrite(whiteLED1,LOW);
  digitalWrite(yellowLED4,LOW);
  delay(smallW) ;
  // represents 5
  delay(longW) ;

  digitalWrite(yellowLED4,HIGH); 
    digitalWrite(greenLED2,HIGH); 
  delay(smallW);
  digitalWrite(greenLED2,LOW);
  digitalWrite(yellowLED4,LOW);
  delay(smallW) ;
  // represents 6
  delay(longW) ;

   digitalWrite(yellowLED4,HIGH); 
    digitalWrite(greenLED2,HIGH); 
    digitalWrite(whiteLED1,HIGH);
  delay(smallW);
  digitalWrite(greenLED2,LOW);
  digitalWrite(yellowLED4,LOW);
  digitalWrite(whiteLED1,LOW);
  delay(smallW) ;
  // represents 7
  delay(longW) ;

   digitalWrite(redLED8,HIGH); 
  delay(smallW);
  digitalWrite(redLED8,LOW);
  delay(smallW) ;
  // represents 8
  delay(longW) ;

   digitalWrite(redLED8,HIGH); 
    digitalWrite(whiteLED1,HIGH); 
  delay(smallW);
  digitalWrite(whiteLED1,LOW);
  digitalWrite(redLED8,LOW);
  delay(smallW) ;
  // represents 9
  delay(longW) ;

  digitalWrite(redLED8,HIGH); 
    digitalWrite(greenLED2,HIGH); 
  delay(smallW);
  digitalWrite(greenLED2,LOW);
  digitalWrite(redLED8,LOW);
  delay(smallW) ;
  // represents 10
  delay(longW) ;

    digitalWrite(redLED8,HIGH); 
    digitalWrite(greenLED2,HIGH); 
    digitalWrite(whiteLED1,HIGH);
  delay(smallW);
  digitalWrite(greenLED2,LOW);
  digitalWrite(redLED8,LOW);
  digitalWrite(whiteLED1,LOW);
  delay(smallW) ;
  // represents 11
  delay(longW) ;

  digitalWrite(redLED8,HIGH); 
    digitalWrite(yellowLED4,HIGH); 
  delay(smallW);
  digitalWrite(yellowLED4,LOW);
  digitalWrite(redLED8,LOW);
  delay(smallW) ;
  // represents 12
  delay(longW) ;

 digitalWrite(redLED8,HIGH); 
    digitalWrite(yellowLED4,HIGH); 
    digitalWrite(whiteLED1,HIGH);
  delay(smallW);
  digitalWrite(redLED8,LOW);
  digitalWrite(yellowLED4,LOW);
  digitalWrite(whiteLED1,LOW);
  delay(smallW) ;
  // represents 13
  delay(longW) ;

  digitalWrite(redLED8,HIGH); 
    digitalWrite(greenLED2,HIGH); 
    digitalWrite(yellowLED4,HIGH);
  delay(smallW);
  digitalWrite(greenLED2,LOW);
  digitalWrite(redLED8,LOW);
  digitalWrite(yellowLED4,LOW);
  delay(smallW) ;
  // represents 14
  delay(longW) ;

  
  digitalWrite(redLED8,HIGH); 
    digitalWrite(greenLED2,HIGH); 
    digitalWrite(yellowLED4,HIGH);
    digitalWrite(whiteLED1,HIGH);
  delay(smallW);
  digitalWrite(greenLED2,LOW);
  digitalWrite(redLED8,LOW);
  digitalWrite(yellowLED4,LOW);
  digitalWrite(whiteLED1,LOW);
  delay(smallW) ;
  // represents 15
  delay(longW) ;
}
