int Potentiomoter = A3;
int readVal;
int redPin = 11; 
int yellowPin = 6;
int greenPin = 3;
float V2;
int wait = 1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Potentiomoter,INPUT);
  pinMode(redPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(Potentiomoter);
  V2=(5./1023.)*readVal;
  Serial.print("Potentiometer Voltage is ");
  Serial.println(V2);

  if(V2<3.0){ //If V2 < 3V = Display Green 
digitalWrite(redPin,LOW);
digitalWrite(yellowPin,LOW);
digitalWrite(greenPin,HIGH);
  }
  if(V2>3.0 && V2 <4.0){ //If V2  >3V and <4V = Display Yellow 
digitalWrite(redPin,LOW);
digitalWrite(yellowPin,HIGH);
digitalWrite(greenPin,LOW);
  }
  if(V2>4.0){ //If V2 > 4V = Display RED 
digitalWrite(redPin,HIGH);
digitalWrite(yellowPin,LOW);
digitalWrite(greenPin,LOW);
  }
  delay(wait);
}
