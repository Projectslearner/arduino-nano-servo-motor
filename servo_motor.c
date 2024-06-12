/*
    Project name : Servo Motor
    Modified Date: 12-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-servo-motor
*/

#include <Servo.h>

Servo servoMotor;  // Create a servo object

int angle = 0;     // Initial angle position of the servo

void setup() {
  servoMotor.attach(9);  // Attach the servo to pin 9
}

void loop() {
  // Sweep the servo from 0 to 180 degrees
  for (angle = 0; angle <= 180; angle++) {
    servoMotor.write(angle);  // Set servo position
    delay(15);  // Wait for the servo to reach the position
  }
  
  // Sweep the servo from 180 to 0 degrees
  for (angle = 180; angle >= 0; angle--) {
    servoMotor.write(angle);  // Set servo position
    delay(15);  // Wait for the servo to reach the position
  }
}
