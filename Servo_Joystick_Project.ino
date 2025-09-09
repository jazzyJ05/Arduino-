#include <Servo.h>
Servo Xservo;
Servo Yservo;

int buzzPin = 7;
int WVx;
int WVy;
int Xpin=A0;
int Ypin=A1;
int Spin=2;
int Xval;
int Yval;
int Sval;
int XSpin = 6;
int YSpin = 9;
int dt=200;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Xpin,INPUT);
  pinMode(Ypin,INPUT);
  pinMode(Spin,INPUT);
  digitalWrite(Spin,HIGH);
  pinMode(XSpin, OUTPUT);
  pinMode(YSpin, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  Xservo.attach(XSpin);
  Yservo.attach(YSpin);
}

void loop() {
  // put your main code here, to run repeatedly:
  Xval=analogRead(Xpin);
  WVx = (180./1023.)*Xval;
  Yval=analogRead(Ypin);
  WVy = (180./1023.)*Yval;
  Sval=digitalRead(Spin);

  Xservo.write(WVx);
  Yservo.write(WVy);

if (Sval==0){
  digitalWrite(buzzPin,HIGH);
}
else {
  digitalWrite(buzzPin,LOW);
}

  delay(dt);
  Serial.print(" X Value = ");
  Serial.print(Xval);
  Serial.print(" Y Value = ");
  Serial.print(Yval);
  Serial.print(" Switch State is ");
  Serial.println(Sval);

}
