#include "DHT.h"  

#define DHT_TYPE DHT11 
#define DHT_PIN A0      
DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  Serial.begin(115200);
  Serial.print(DHT_TYPE);
  Serial.println(" Sensor Test");
  dht.begin();
}
void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  if (isnan(h) || isnan(t)) {
    Serial.println("Error!! Reading from DHT sensor");
    return;
  }
  Serial.println("===========================");
  Serial.print(" Humidity : ");
  Serial.print(h);
  Serial.println("%");
  Serial.print(" Temperature : ");
  Serial.print(t);
  Serial.print("\xC2\xB0");
  Serial.println("C");
  Serial.println("===========================");
  delay(1000);
}