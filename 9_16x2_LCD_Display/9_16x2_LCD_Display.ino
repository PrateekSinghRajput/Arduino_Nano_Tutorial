
#include <LiquidCrystal.h>

const int rs = 4, en = 5, d4 = 0, d5 = 1, d6 = 2, d7 = 3;  // D4,D5,D0,D1,D2,D3
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
    lcd.setCursor(0, 0);
  lcd.print("Justdoelectronic");
}

void loop() {
  lcd.setCursor(5, 1);
  lcd.print(millis() / 1000);
}