/*
 * Check if the library is working without connecting anything.
 */

#include <L298N.h>

//Modify these values with the connections do you use.
//l298n(int leftBackwards, int leftForward, int rightBackwards, int rightForward)
L298N l298n(9,8,7,6);

void setup() {
  Serial.begin(9600);
}

void loop() {
  //Should print '1' every 100 milisec to check if the library is working.
  Serial.print(l298n.check());
  delay(100);
}