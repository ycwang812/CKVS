/*
  This program blinks pin 13 of the Arduino (the
  built-in LED)
*/


void setup()
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

void loop()
{  
  if (digitalRead(2)) {
    digitalWrite(3, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
  }
}