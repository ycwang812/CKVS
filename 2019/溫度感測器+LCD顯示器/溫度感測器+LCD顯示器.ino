// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Temp Sensor Demo");
  lcd.setCursor(0, 1);
  lcd.print("Start up...");
  
  pinMode(A0, INPUT);
  Serial.begin(9600);
  
  delay(2000);
}

void loop() {
  // measure temperature in Celsius
  int celsius = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
  
  lcd.clear();
  
  String s = "Temp: ";
  s += celsius;
  s += " C";
  
  lcd.print("- Temp sensor  -");
  lcd.setCursor(0, 1);
  lcd.print(s);
  
  delay(1000);
}
 