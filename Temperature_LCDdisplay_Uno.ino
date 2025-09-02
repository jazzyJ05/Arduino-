#include <DHT.h>
#include <LiquidCrystal.h>
#define Type DHT11
int sensePin = 2;
DHT HT(sensePin,Type);
float humidity;
float tempC;
float tempF;
int setTime = 500;
int dt = 1000;
//LCD DISPLAY
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int shortW = 2000;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
HT.begin();
delay(setTime);
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
humidity = HT.readHumidity();
tempC = HT.readTemperature();
tempF = HT.readTemperature(true);


Serial.print("Humidity: ");
lcd.setCursor(0,0);
lcd.print("Humidity is");
Serial.print(humidity);
Serial.print("%");
lcd.setCursor(0,1);
lcd.print(humidity);
lcd.print("%");

delay(shortW);

lcd.clear();

Serial.print(" Temperature: ");
lcd.setCursor(0,0);
lcd.print("Temperature is");
Serial.print(tempC);
lcd.setCursor(0,1);
lcd.print(tempC);
lcd.print("C");

delay(shortW);

lcd.clear();

Serial.print(" C ");


lcd.setCursor(0,0);
lcd.print("Temperature is");
lcd.setCursor(0,1);
Serial.print(tempF);
lcd.print(tempF);
Serial.println(" F ");
lcd.print(" F ");
delay(dt);

lcd.clear();
}
