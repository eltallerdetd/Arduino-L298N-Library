#include "L298N.h"

//Constructor
L298N::L298N(int leftBackwards, int leftForward, int rightBackwards, int rightForward){
        pinMode(_leftBackwards,OUTPUT);
        _leftBackwards = leftBackwards;
        pinMode(_leftForward, OUTPUT);
        _leftForward = leftForward;
        pinMode(_rightBackwards, OUTPUT);
        _rightBackwards = rightBackwards;
        pinMode(_rightForward, OUTPUT);
        _rightForward = rightForward;
}

//Moves the motors backwards.
void L298N::moveBackwards(){
    digitalWrite(_rightForward,LOW);     
    digitalWrite(_rightBackwards,HIGH); 
    digitalWrite(_leftForward, LOW);  
    digitalWrite(_leftBackwards, HIGH); 
}

//Moves the motors forward.
void L298N::moveForward(){
    digitalWrite(_rightForward,HIGH);     
    digitalWrite(_rightBackwards,LOW); 
    digitalWrite(_leftForward, HIGH);  
    digitalWrite(_leftBackwards, LOW); 
}

//Moves the motors right.
void L298N::moveRight(){
    digitalWrite(_rightForward,LOW);     
    digitalWrite(_rightBackwards,HIGH); 
    digitalWrite(_leftForward, HIGH);  
    digitalWrite(_leftBackwards, LOW); 
}

//Moves the motors left.
void L298N::moveLeft(){
    digitalWrite(_rightForward,HIGH);     
    digitalWrite(_rightBackwards,LOW); 
    digitalWrite(_leftForward, LOW);  
    digitalWrite(_leftBackwards, HIGH); 
}

//Stop all the motors.
void L298N::stop(){
    digitalWrite(_rightForward,LOW);     
    digitalWrite(_rightBackwards,LOW); 
    digitalWrite(_leftForward, LOW);  
    digitalWrite(_leftBackwards, LOW); 
}

//Check if the library is currently working.
int L298N::check(){
    return 1;
}

