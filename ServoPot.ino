#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int pos = 0;    // variable to store the servo position
const int pot = A0; //pin of the 10K pot beung used to control servo


void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  //interpolate the pot values between 0 and 180, and write those to the servo.
  myservo.write((analogRead(pot) * 180.0) / 1024); 
}
