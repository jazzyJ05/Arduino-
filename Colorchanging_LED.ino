int redPin=3;
int greenPin=5;
int bluePin=6;
String myColor;
String msg = "What Colour Do You Want?";
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0) {

}

myColor = Serial.readString();

if(myColor=="red"){
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
}
if(myColor=="blue"){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,HIGH);
}
if(myColor=="green"){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,LOW);
}
if(myColor=="off"){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
}
if(myColor=="purple"){
  analogWrite(redPin,255);
  analogWrite(greenPin,0);
  analogWrite(bluePin,255);
}
if(myColor=="pink"){
  analogWrite(redPin,255);
  analogWrite(greenPin,0);
  analogWrite(bluePin,55);
}
if(myColor=="yellow"){
  analogWrite(redPin,255);
  analogWrite(greenPin,35);
  analogWrite(bluePin,0);
}
if(myColor=="white"){
  analogWrite(redPin,255);
  analogWrite(greenPin,255);
  analogWrite(bluePin,255);
}
if(myColor=="lime"){
  analogWrite(redPin,255);
  analogWrite(greenPin,255);
  analogWrite(bluePin,50);
}
if(myColor=="orange"){
  analogWrite(redPin,255);
  analogWrite(greenPin,55);
  analogWrite(bluePin,0);
}
}