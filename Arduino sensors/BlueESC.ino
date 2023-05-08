#include <Servo.h>

byte servoPin1 = 5;
byte servoPin2 = 6;
byte servoPin3 = 7;
byte servoPin4 = 3;
byte servoPin5 = 2;
byte servoPin6 = 4;
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

void Pwm_esc(float thrust){
	//force to pwm mapping here.	
}

void setup(){
	servo.attach(servoPin1);  //Initializing Pin 1
	servo2.attach(servoPin2);
 	servo3.attach(servoPin3);
 	servo4.attach(servoPin4);
 	servo5.attach(servoPin5);
 	servo6.attach(servoPin6);
	servo1.writeMicroseconds(1500);  //Stay stationary 
	servo2.writeMicroseconds(1500);
 	servo3.writeMicroseconds(1500);
 	servo4.writeMicroseconds(1500);
 	servo5.writeMicroseconds(1500);
 	servo6.writeMicroseconds(1500);
	
	delay(5000);
}
	

