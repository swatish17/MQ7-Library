# MQ7-Library

CO (Carbon Monoxide) concentration from MQ7 sensor

The files are used to obtain parts per million (ppm) of the Carbon Monoxide gas using the analog input of the MQ7 gas sensor.

  ## Pre requisites
  
  The following involves the basic connection of MQ7 and Arduino board and the use of this library.

  1. Connect the Vcc and GND pins of the MQ7 sensor to the Arduino 5v and GND pin respectively.
  2. Wire the A0 (analog pin) of MQ7 sensor to any analog pin on the Arduino board.
  3. Make sure the load resistance of the MQ7 is 10k ohm. _(In the MQ7 board make sure the potentiometer measures 10k ohm)_.
  5. [Download](https://www.arduino.cc/en/Main/Software) Arduino Software.
  4. Clone or download this files and place them under **\Program Files\Arduino\libraries\MQ7** folder for including them in the Arduino code.

  ## Code

  1. Include the header file to the source code.
  > _**#include "MQ7.h"**_
  2. Initialize the sensor object
  > _**MQ7 mq7(A0, 5.0);** // param[1] : Analog pin number, param[2] : Sensor Vcc value_
  3. To find the ppm
  > _**float ppm = mq7.getPPM();**_

  This library can be used on any Arduino or ESP boards. Just vary the param[2] based on the Vcc.
