#include "DHT.h"  
#include <LiquidCrystal.h>

LiquidCrystal lcd(4, 5, 0, 1, 2, 3);
#define DHT_TYPE DHT11 
#define DHT_PIN A0      
DHT dht(DHT_PIN, DHT_TYPE);

void setup() {

  dht.begin();
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Welcome To");
  lcd.setCursor(0, 1);
  lcd.print("Justdoelectronic");
  delay(3000);
  lcd.clear();
}
void loop() {

   float h = dht.readHumidity();
  float t = dht.readTemperature();
  if (isnan(h) || isnan(t)) {
    Serial.println("Error!! Reading from DHT sensor");
    lcd.setCursor(0, 0);
    lcd.print("DHT Sensor Faild");
    return;
  }

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Humidity: ");
  lcd.print(h);
  lcd.print("%");
  lcd.setCursor(0, 1);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.setCursor(12, 1);
  lcd.print((char)223);
  lcd.print("C");
  
  delay(100);
}