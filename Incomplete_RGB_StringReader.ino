String msg = "What color do you want?";
int redPin = 3;
int greenPin = 4;
int bluePin = 5;
String pinColor;
int wait=500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available()==0 ){

  }
  
  pinColor = Serial.readString();

  if( Serial.readString() == "Blue" || "blue"){
    digitalWrite(bluePin,LOW);
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);

  }

  if( Serial.readString() == "Green" || "green"){
    digitalWrite(greenPin,HIGH);
    digitalWrite(redPin,LOW);
    digitalWrite(bluePin,LOW);

  }

 if( Serial.readString() == "Red" || "red"){
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,LOW);
  }
}
