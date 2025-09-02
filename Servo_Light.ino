 #include <Servo.h>
 int servoPin = 10;
 int servoPos = 0;
 int lightPin = A3;
 int lightRead;
Servo myServo;
 int wait = 500;
 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(servoPin);
  pinMode(lightPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  lightRead=analogRead(lightPin);
  servoPos=(9./11.)*lightRead;
  Serial.println(lightRead);
  delay(wait);
  myServo.write(servoPos);
}
