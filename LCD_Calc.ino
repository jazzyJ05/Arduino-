#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int dt = 500 ;
int LONGDELAY= 2000;
// Serial Monitor variables
String msg1 = "Enter First #: ";
String msg2 = "Enter Second #: ";
String msg3 = "What operation: ";
String msg4 = "Answer is: ";
String OoO;
float int1;
float int2;
String Addition;
String Subtraction;
String Multiplication;
String Division;
float answer;
int dt1 = 650;


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
 // Serial Monitor Code
Serial.println(msg1);
lcd.setCursor(0,0);
lcd.print("Enter First #");
 while (Serial.available()==0){

 }
 

 int1 = Serial.parseFloat();
 Serial.println(int1);
 lcd.setCursor(0,1);
 lcd.print(int1);

delay(dt);
lcd.clear();

Serial.println(msg2);
lcd.print("Enter Second #");
while (Serial.available()==0){

 } 


 int2 = Serial.parseFloat();
 Serial.println(int2);
 lcd.setCursor(0,1);
lcd.print(int2);

delay(dt);
lcd.clear();
 

Serial.println(msg3);
lcd.print("What Operation ");
while (Serial.available()==0){

 }

OoO = Serial.readString();
lcd.setCursor(0,1);
lcd.print(OoO);

Serial.print(int1);
Serial.print(OoO);
Serial.print(int2);
Serial.println("=");

if (OoO == "+"){
answer = int1 + int2;
}

if (OoO == "-"){
  answer = int1 - int2;
}

if (OoO == "/"){
  answer = int1 / int2;
}

if (OoO == "*"){
  answer = int1*int2;
}

delay(dt);

Serial.print(msg4);
Serial.println(answer);
lcd.setCursor(0,0);
lcd.print("Your Answer is");
lcd.setCursor(0,1);
lcd.print(answer);

delay(LONGDELAY);
lcd.clear();
}
