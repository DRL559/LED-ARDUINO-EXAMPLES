// LED Fade Example
// Fades LED brightness up and down using PWM on pin 3
// Demonstrates analogWrite() and for loops

const int ledPin = 3; // defining it a constant to make it easier to change later

void setup()
{
  pinMode(ledPin, OUTPUT); 
}

void loop()
{
for(int v = 0; v<=255 ; v++){ // FADE IN
  analogWrite(ledPin,v);
  delay(5); // Delay a bit for smoothness
}
for(int v = 255; v>=0 ; v--){ // FADE OUT
  analogWrite(ledPin,v);
  delay(5);
}
}
