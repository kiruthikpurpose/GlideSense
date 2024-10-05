# Hardware Setup Guide for Arduino/RPi

## Arduino Setup
1. **Required Components**:
   - Arduino board (e.g., Arduino Uno)
   - Vibration sensor
   - Position sensor
   - Jumper wires
   - Breadboard

2. **Wiring**:
   - Connect the vibration sensor to an analog pin (e.g., A0).
   - Connect the position sensor to another analog pin (e.g., A1).
   - Power the sensors using the 5V and GND pins on the Arduino.

3. **Upload the Code**:
   - Open the `glide_sense.ino` sketch in the Arduino IDE.
   - Upload the code to the Arduino board.

## Raspberry Pi Setup
1. **Required Components**:
   - Raspberry Pi board
   - Vibration sensor
   - Position sensor
   - Jumper wires

2. **Wiring**:
   - Connect the vibration sensor to a GPIO pin.
   - Connect the position sensor to another GPIO pin.
   - Power the sensors using the 3.3V or 5V pins on the Raspberry Pi.

3. **Upload the Code**:
   - Open the `glide_sense.cpp` file in a suitable C++ IDE.
   - Compile and run the code on the Raspberry Pi.
