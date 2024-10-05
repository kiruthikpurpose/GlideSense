#include "sensors.h"
#include <wiringPi.h>

void initialize_sensors() {
    wiringPiSetup();
    pinMode(0, INPUT);
    pinMode(1, INPUT);
}

SensorData read_sensor_data() {
    SensorData data;
    data.wiper_position = analogRead(0);
    data.vibration_level = analogRead(1);
    return data;
}
