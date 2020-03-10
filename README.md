# L298N Arduino Motors Driver Library

An Open Source library for Arduino and the L298N driver module. Ready to work with 4 motors.

## Important Information

This library is especially designed to work with 4 motors connected to the L298N, currently it doesn't support only 2 of them.

Wiring is essential for the library to work properly, so please be sure to connect your motors in the right way or the methods can doesn't work as expected.

## Installation

Download this repository as a .zip file, or []click this](https://github.com/imTDB/Arduino-L298N/archive/master.zip) to download it directly. Then go to the Arduino IDE, once there go to `Sketch -> Include library -> Add .ZIP Library` to have it ready to use.


## Usage

Use `#include <L298N.h>` to add the library to your project.

| Method | Usage |
| --- | --- |
| `L298N()` | Constructor. Put the parameters in this order, `(int IN1, int IN2, int IN3, int IN4)` |
| `moveBackwards()` | Moves the motors in backwards direction. |
| `moveForward()` | Moves the motors in forward direction. |
| `moveRight()` | Moves the motors to turn right. |
| `moveLeft()` | Moves the motors to turn left. |
| `stop()` | Stop all the motors. |
| `check()` | If the library is currently working returns 1 (Just for debugging purposes). |

## Examples

| Method | Usage |
| --- | --- |
| [basic_movement](https://github.com/imTDB/Arduino-L298N/tree/master/examples/basic_movement) | Moves the motors in all available directions. |
| [simple_check](https://github.com/imTDB/Arduino-L298N/tree/master/examples/bluetooth_movement) | Checks if the library is working without any wiring. |
| [bluetooth_movement](https://github.com/imTDB/Arduino-L298N/tree/master/examples/simple_check) | Use a Bluetooth App to move the motors. |


## Contributing

Pull requests are welcome, [click here to contribute!](https://github.com/imTDB/Arduino-L298N/pulls).
If you have any problem working with the library post it on [Issues](https://github.com/imTDB/Arduino-L298N/issues).

## Things to add

- [ ] Add PWM support.
- [ ] Add 2 motors support.
- [ ] Translate README into Spanish.
- [ ] Add more examples.



## License

Working on that.

---
Stars and forks are aprecciated :star:

⌨️ with ❤️ por [@tadeodonegana](https://twitter.com/tadeodonegana).