
int pot_pin = A6;
int pot_value;

void setup() {
  Serial.begin(9600);
  pinMode(pot_pin, INPUT);
}

void loop() {
  pot_value = analogRead(pot_pin);
  Serial.println(pot_value);
  delay(100);
}