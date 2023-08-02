
void setup(){
  Serial.begin(9600);
}

void loop(){
  int analog = analogRead(A0);
  float volt = analog * (5 / 1023.0);

  Serial.print("Analog: ");
  Serial.print(analog);
  Serial.print(" / Voltage: ");
  Serial.println(volt);
  delay(1000);  
}



