int green = 9; 
int blue = 10; 
int red = 11; 
int pot_pin = A6; 
int pot_value;                         
int led_value;                        
void setup()
{
  pinMode(green,OUTPUT);     
   pinMode(blue,OUTPUT);  
    pinMode(red,OUTPUT);           
  pinMode(pot_pin,INPUT);               
}

void loop() 
{
  pot_value = analogRead(pot_pin);                		
  led_value = map(pot_value, 0, 1023, 0, 255);   
  analogWrite(green,led_value);  
  analogWrite(blue,led_value);  
   analogWrite(red,led_value);  
  delay(100); 
}