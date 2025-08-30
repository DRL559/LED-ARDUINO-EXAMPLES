const int ledPin = 13; // defining it a constant to make it easier to change later

void setup()
{
  pinMode(ledPin, OUTPUT); 
}

void loop()
{
  digitalWrite(13, HIGH); // turns on led
  delay(1000); // waits 1 second
  digitalWrite(13,LOW); // turns off led
  delay(1000); // waits 1 second
}
