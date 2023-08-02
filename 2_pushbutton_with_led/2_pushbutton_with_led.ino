int buttonPin = A1; 
int ledPin = 11;    

int buttonstate;                
int prev_buttonstate = HIGH;    

void setup() 
{
  pinMode(buttonPin,INPUT);            
  pinMode(ledPin,OUTPUT);                 
  digitalWrite(ledPin,prev_buttonstate);    
}
void loop() 
{
  buttonstate = digitalRead(buttonPin);
  if(buttonstate != prev_buttonstate) 
  { 
    delay(20);                        
    buttonstate = digitalRead(buttonPin);  
    prev_buttonstate = buttonstate;        
  }
  digitalWrite(ledPin,buttonstate) ;      
}