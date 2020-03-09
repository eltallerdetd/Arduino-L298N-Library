/*
* Moves the motors in every available direction for 1 second each.
*/

#include <L298N.h>

//Modify these values with the connections do you use.
//l298n(int leftBackwards, int leftForward, int rightBackwards, int rightForward)
L298N l298n(9,8,7,6);

void setup() {
}

void loop() {
  //Move the motors in all available directions for 1000 milisec.
  l298n.moveForward();
  delay(1000);
  l298n.moveBackwards();
  delay(1000);
  l298n.moveRight();
  delay(1000);
  l298n.moveLeft();
  delay(1000);
}