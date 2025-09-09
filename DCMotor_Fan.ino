int speedPin = 5;
int dir1 = 4;
int dir2 = 3;
int MSpeed = 255;
int tiltSwitch = 2;
int tiltVal;
int dt = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(speedPin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
  Serial.begin(9600);
  pinMode(tiltSwitch,INPUT);
  digitalWrite(tiltSwitch,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if (tiltVal==0){
  digitalWrite(dir1,HIGH); // DC Fan code
  digitalWrite(dir2,LOW);
  analogWrite(speedPin,MSpeed);
  MSpeed = 255;
  }


  tiltVal = digitalRead(tiltSwitch); //tilt switch code
  Serial.println(tiltVal);
  delay(dt);

  if(tiltVal==1){
    MSpeed = 0;
  analogWrite(speedPin,MSpeed);
  }


  
}
