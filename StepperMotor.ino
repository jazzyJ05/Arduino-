#include <Stepper.h>
int stepsPerRevolution = 2048;
int motSpeed=10;
int dt = 100;
int buttonPin = 6;
int buttonVal;
int buttonNew;
int buttonOld = 1;
int motDir = 1000;
Stepper myStepper(stepsPerRevolution, 8,10,9,11);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myStepper.setSpeed(motSpeed);
  pinMode(buttonPin,INPUT);
  digitalWrite(buttonPin,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonNew=digitalRead(buttonPin);
  if (buttonOld==1 && buttonVal==0){
    motDir=motDir*(-1);
  }
  myStepper.step(motDir*1);

  buttonOld=buttonNew;
}
