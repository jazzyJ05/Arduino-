#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int dt = 1000 ;
int LONGDELAY= 2000;
//Serial Montior
String msg1 = "Travel Time = ";
String msg2 = "Average Distance = ";
//Sensor code
int trigPin = 4;
int echoPin = 3;
float pingTravelTime;
float distance;
float pingTravelDistance;
float distancetoTarget;
//BUTTON
int buttonPin = 5;
int buttonRead;
// Average Variables
int numMeas=50;
float average;
int j;
float bucket=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
  pinMode(buttonPin,INPUT);
  digitalWrite(buttonPin,HIGH);
  

}

void loop() {
  // put your main code here, to run repeatedly:
 bucket = 0;
 for(j=1;j<=numMeas;j=j+1){
  
  digitalWrite(trigPin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  pingTravelTime=pulseIn(echoPin,HIGH);
  delay(25);
  pingTravelDistance = (pingTravelTime*765.*5280.*12./(3600.*1000000.));
  distancetoTarget = pingTravelDistance/2 ;
  bucket=bucket + distancetoTarget;
  }
  average = bucket/numMeas;

  buttonRead = digitalRead(buttonPin);
  lcd.setCursor(0,0);
  lcd.print("Place the Target");
  lcd.setCursor(0,1);
  lcd.print("Press the Button");
if(buttonRead==0){
  lcd.clear();
  Serial.print("Button Reads:");
  Serial.print(buttonRead);
  Serial.print(" Travel Time = ");
  Serial.print(pingTravelTime);
  Serial.print(" MSecs");
  Serial.print(" ");
  Serial.print("The Average Distance is ");
  Serial.print(average);
  Serial.println(" Inches");
  
  lcd.setCursor(0,0);
  lcd.print(msg1);
  lcd.setCursor(0,1);
  lcd.print(pingTravelTime);
  lcd.print(" MSecs");
delay(dt);
lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(msg2);
  lcd.setCursor(0,1);
  lcd.print(average);
  lcd.print(" Inches");
delay(dt);
lcd.clear();
}



}

