#include <Servo.h>

int pos = 0;
Servo wheel1;
Servo wheel2;
void setup() {
  // put your setup code here, to run once:
  wheel1.attach(9);
  //wheel2.attach(10);
}

void turnLeft() {
  //Code to turn left
}

void turnRight() {
  //Code to turn right
}

void loop() {
  // put your main code here, to run repeatedly:
  wheel1.write(pos);
  delay(15);
  
  wheel2.write(pos);
  delay(15);
}
