int BUTTON_PIN = 4;
int ledPin = 2;
void setup()
{
   pinMode(BUTTON_PIN, INPUT_PULLUP);
}    
void loop()
{    
  int  buttonState = digitalRead(BUTTON_PIN);
   
  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
