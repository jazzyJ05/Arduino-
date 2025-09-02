int redLed = 5;
int but1 = 11;
int but2 = 10;
int pBuzzer = 3;
int wait = 100;
int buttonRead1;
int buttonRead2;
int ledBright=0;
int bz = 50;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redLed,OUTPUT);
  pinMode(but1,INPUT);
  pinMode(but2,INPUT);
  pinMode(pBuzzer,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonRead1 = digitalRead(but1);
  buttonRead2 = digitalRead(but2);
  delay(wait);
  Serial.print("Button 1 reads:");
  Serial.println(buttonRead1);
  delay(wait);
  Serial.print("Button 2 reads:");
  Serial.println(buttonRead2);

  if (buttonRead1 == 0){
    ledBright=ledBright+20;
  }

  if (buttonRead2 == 0){
    ledBright=ledBright-20;
  }

  if (ledBright >255){
    ledBright=255;
    digitalWrite(pBuzzer,HIGH);
    delay(bz);
    digitalWrite(pBuzzer,LOW);
  }

  if(ledBright < 0){
    ledBright=0;
    digitalWrite(pBuzzer,HIGH);
    delay(bz);
    digitalWrite(pBuzzer,LOW);

  }

  analogWrite(redLed,ledBright);


}
