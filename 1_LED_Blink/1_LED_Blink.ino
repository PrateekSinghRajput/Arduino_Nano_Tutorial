int green = 9 ;  
int blue = 10 ;  
int red = 11 ;  

void setup() 
{
    pinMode(green, OUTPUT);  
    pinMode(blue, OUTPUT);  
    pinMode(red, OUTPUT);  
}

void loop()
{
    digitalWrite(green, HIGH);
    digitalWrite(blue, HIGH);
    digitalWrite(red, HIGH);
    delay(1000);                
    digitalWrite(green,LOW); 
    digitalWrite(blue, LOW);
    digitalWrite(red, LOW);
    delay(1000);                
}