#include <Servo.h> 
int servoPin = 9; 
Servo servoMain; 
void setup() { 
   servoMain.attach(servoPin); 
}
void loop(){ 
  servoMain.write(45);  // Turn Servo Left to 45 degrees
   delay(1000);         
   servoMain.write(0);   // Turn Servo Left to 0 degrees
   delay(1000);          
   servoMain.write(90);  // Turn Servo back to center position (90 degrees)
   delay(1000);          
   servoMain.write(135); // Turn Servo Right to 135 degrees
   delay(1000);          
   servoMain.write(180); // Turn Servo Right to 180 degrees
   delay(1000);          
   servoMain.write(90);  // Turn Servo back to center position (90 degrees)
   delay(1000);           
}
