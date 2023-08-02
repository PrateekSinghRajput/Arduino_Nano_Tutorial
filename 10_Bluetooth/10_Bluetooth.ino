#include <SoftwareSerial.h>   

const int Rx = 12; 
const int Tx = 13;

SoftwareSerial hc05(Rx, Tx);

void setup(){
  Serial.begin(115200);
  while(!Serial);
  Serial.println("Serial Started");
  hc05.begin(9600);  
  hc05.println("Hello, world?");
}

void loop(){
 if(hc05.available()){
  Serial.write(hc05.read()); 
 }
 if(Serial.available()){
  hc05.write(Serial.read());
 }
}