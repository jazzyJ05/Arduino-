#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int dt = 1000 ;
int dt1 = 2000;
// Variables
String msg1 = "Radius Value: ";
String msg2 = "Your Area is: ";
float rad;
float area;
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  lcd.print(msg1);
  Serial.println(msg1);
  while(Serial.available()==0){}
  rad = Serial.parseFloat();

  Serial.println(rad);
  lcd.setCursor(0,1);
  lcd.print(rad);

  delay(dt);


  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(msg2);
  Serial.println(msg2);
  area =  (rad*rad) * 3.14;

  Serial.println(area);
  lcd.setCursor(0,1);
  lcd.print(area);

  delay(dt1);

lcd.clear();

}
