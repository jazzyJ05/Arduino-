int trigPin = 12;
int echoPin = 11;
float pingTravelTime;
float distance;
float pingTravelDistance;
float distancetoTarget;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  pingTravelTime=pulseIn(echoPin,HIGH);
  delay(25);
  pingTravelDistance = (pingTravelTime*767.*5280.*12./(3600.*1000000.));
  distancetoTarget = pingTravelDistance/2 ;
  Serial.print("Travel Time = ");
  Serial.print(pingTravelTime);
  Serial.print(" ");
  Serial.print("The Distance is ");
  Serial.println(distancetoTarget);

  delay(100);



}
