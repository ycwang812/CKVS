void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  // measure temperature in Celsius
  int celsius = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
  
  /*
  // convert to Fahrenheit
  int fahrenheit = ((celsius * 9) / 5 + 32);
  
  Serial.print(celsius);
  Serial.print(" C, ");
  Serial.print(fahrenheit);
  Serial.println(" F");
  */
  
  if (celsius < 16) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
  } else if (celsius >= 16 && celsius < 27) {
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  } else {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  
  delay(1000);
}