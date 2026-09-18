#include <Servo.h>

Servo servo;
int angle = 175;

void setup() {
  servo.attach(8);
  servo.write(angle);
}


void loop() 
{ 
 // scan from 0 to 180 degrees
  for(angle = 175; angle > 120; angle--)  
  {                                  
    servo.write(angle);               
    delay(15);                   
  } 
  // now scan back from 180 to 0 degrees
  for(angle = 120; angle < 175; angle++)    
  {                                
    servo.write(angle);           
    delay(15);       
  } 
}