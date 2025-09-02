int latchPin = 11;
int clockPin = 9;
int dataPin = 12;
int dt=250;
int dt1=1000;

byte LEDs = 0x0b;




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(latchPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(latchPin,LOW);
   shiftOut(dataPin,clockPin,LSBFIRST,LEDs);
   delay(dt);
   digitalWrite(latchPin,HIGH);
  delay(dt);

   /*digitalWrite(latchPin,LOW);
   shiftOut(dataPin,clockPin,MSBFIRST,LEDs);
   delay(dt);
   digitalWrite(latchPin,HIGH);*/

 LEDs = (255-LEDs);
  delay(dt);
 Serial.println(LEDs);
 delay(dt);
 }
