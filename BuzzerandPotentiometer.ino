int buzzPin=8;
int wait=500;
int readPin = A3;
int readVal;
float V2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);
  pinMode(readPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(readPin);
  V2 = (5./1023.)*readVal;
  Serial.println(readVal);
  delay(wait);

if(readVal>=1000){
  digitalWrite(buzzPin,HIGH);
  delay(wait);
  digitalWrite(buzzPin,LOW);
delay(wait);
}
if(readVal<1000){
  digitalWrite(buzzPin,LOW);
  }
}
