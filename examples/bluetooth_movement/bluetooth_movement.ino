/*
 * Moves the motors via Bluetooth with the Arduino Bluetooth RC Car (https://play.google.com/store/apps/details?id=braulio.calle.bluetoothRCcontroller&hl=es_419).
 */

#include <L298N.h>

//Modify these values with the connections do you use.
//l298n(int leftBackwards, int leftForward, int rightBackwards, int rightForward)
L298N l298n(9,8,7,6);

//char variable to store a default value;
char bluetoothStatus = 'S';

void setup() {
  //Begin Serial Communication.
  Serial.begin(9600);
}

void loop() {
  //If the software recives data then read the Serial Monitor and stores that data into a variable
  if(Serial.available()>0){
    bluetoothStatus = Serial.read();
  }

  //Switch statment to switch between the different modes.
  switch(bluetoothStatus){
    case 'F':
      l298n.moveForward();
      break;

    case 'B':
      l298n.moveBackwards();
      break;

    case 'R':
      l298n.moveRight();
      break;

    case 'L':
      l298n.moveLeft();
      break;  

    case 'S':
      l298n.stop();
      break; 
    }    
  }  
}