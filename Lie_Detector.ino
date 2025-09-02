void setup()
{
	Serial.begin(9600);
	pinMode(2, OUTPUT);
	pinMode(3,OUTPUT);
	pinMode(4,OUTPUT);
	digitalWrite(2, HIGH);
	delay(500);
	digitalWrite(3, HIGH);
	delay(500);
	digitalWrite(4, HIGH);
	delay(500);
}

void
  loop()
{
	if (analogRead(A0) > 900)
	{
		digitalWrite(4, HIGH);
	}
	else
	{
		digitalWrite(4,LOW);
	}
	if (analogRead(A0) > 300)
	{
		digitalWrite(2, HIGH);
	}
	else
	{
		digitalWrite(2, LOW);
	}
	if (analogRead(A0) > 600)
	{
		digitalWrite(3,HIGH);
	}
	else
	{
		digitalWrite(3,LOW);
	}

	Serial.println(analogRead(A0));
	delay(40);
}
