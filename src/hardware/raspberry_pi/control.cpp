#include "control.h"
#include <iostream>

int wiper_speed = 10;
int wiper_pressure = 5;

void initialize_control() {
    wiper_speed = 10;
    wiper_pressure = 5;
}

void adjust_wiper_control(SensorData data) {
    if (data.vibration_level > 5) {
        wiper_pressure += 1;
        if (wiper_pressure > 10) wiper_pressure = 10;
    } else {
        wiper_pressure = 5;
    }

    if (data.wiper_position > 80) {
        wiper_speed = 1;
    } else if (data.wiper_position < 20) {
        wiper_speed = 10;
    } else {
        wiper_speed = 5;
    }

    std::cout << "Wiper Position: " << data.wiper_position 
              << ", Vibration Level: " << data.vibration_level 
              << ", Wiper Speed: " << wiper_speed 
              << ", Wiper Pressure: " << wiper_pressure << std::endl;
}
