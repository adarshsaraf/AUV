#include <Servo.h>

byte servoPin1 = 5;
Servo servo1;

void Pwm_esc(float thrust){
	//force to pwm mapping here.	
}

void setup(){
	servo.attach(servoPin1);  //Initializing Pin 1
	servo.writeMicroseconds(1500);  //Stay stationary 
	
	delay(2000);
}
	

