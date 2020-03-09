#ifndef L298N_h
#define L298N_h

#include "Arduino.h"

class L298N {

    private:
        int _leftBackwards;
        int _leftForward;
        int _rightBackwards;
        int _rightForward;

    public:
        L298N(int leftBackwards, int leftForward, int rightBackwards, int rightForward);
        void moveForward();
        void moveBackwards();
        void moveRight();
        void moveLeft();
        void stop();
        int check();

};

#endif 