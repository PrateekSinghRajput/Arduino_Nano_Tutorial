
int Switch_pin = A1;
int switch_value;
int prev_switch_value;
int button;
void setup() {
  Serial.begin(9600);
  pinMode(Switch_pin, INPUT);
  prev_switch_value = analogRead(Switch_pin);
}

void loop() {
  switch_value = analogRead(Switch_pin);
  if ((switch_value > (prev_switch_value + 20)) || (switch_value < (prev_switch_value - 20)))
    delay(20);
  switch_value = analogRead(Switch_pin);
  if ((switch_value > (prev_switch_value + 20)) || (switch_value < (prev_switch_value - 20))) {

    if (switch_value < 100)
      Serial.println("UP BUTTON IS PRESSED");

    else if ((switch_value > 400) && (switch_value < 600))
      Serial.println("LEFT BUTTON IS PRESSED");

    else if ((switch_value > 600) && (switch_value < 725))
       Serial.println("CENTRE BUTTON IS PRESSED");

    else if ((switch_value > 725) && (switch_value < 790))
      Serial.println("RIGHT BUTTON IS PRESSED");

    else if ((switch_value > 790) && (switch_value < 850))
      Serial.println("DOWN BUTTON IS PRESSED");

    else if (switch_value > 900)
      Serial.println("BUTTON IS RELEASED");

    prev_switch_value = switch_value;
  }
  delay(100);
}
