//Motor variables
int speedPin = 5;
int dir1 = 4;
int dir2 = 3;
int MSpeed = 0;
int dt = 100;
//Joystick Variables
int XVal;
int YVal;
int SVal;
int XPin = A0;
int YPin = A1;
int SPin = 2;
void setup() {
  // put your setup code here, to run once:
  //motor
  pinMode(speedPin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
  Serial.begin(9600);

  // joystick
  pinMode(XPin,INPUT);
  pinMode(YPin,INPUT);
  pinMode(SPin,INPUT);
  digitalWrite(SPin,HIGH);


}

void loop() {
  // put your main code here, to run repeatedly:
  
 
  digitalWrite(dir1,HIGH); // DC Fan code
  digitalWrite(dir2,LOW);
  analogWrite(speedPin,MSpeed);
 


 XVal = analogRead(XPin);
 YVal = analogRead(YPin);
 SVal = digitalRead(SPin);

 Serial.print(" X Value is ");
 Serial.print(XVal);
 Serial.print (" ");
 Serial.print(" Y Value is ");
 Serial.print(YVal);
 Serial.print(" Switch State is ");
 Serial.print(SVal);
 Serial.print(" MSpeed = ");
 Serial.println(MSpeed);
 delay(dt);

 if(XVal>513){
  MSpeed = (255./512.)*XVal-255.;
   digitalWrite(dir1,HIGH);
  digitalWrite(dir2,LOW);
  analogWrite(speedPin,MSpeed);
 }

if(XVal<513){
  MSpeed = -255./512.*XVal+255;
   digitalWrite(dir1,LOW);
  digitalWrite(dir2,HIGH);
  analogWrite(speedPin,MSpeed);
 }


if(MSpeed > 255){
  MSpeed = 255;
}

if(MSpeed < -255){
  MSpeed = -255;
}

 if(SVal == 0){
  MSpeed = 0;
 }
  
}
