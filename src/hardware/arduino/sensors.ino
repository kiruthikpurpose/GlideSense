#include "sensors.h"

void initialize_sensors() {
    pinMode(34, INPUT);
    pinMode(35, INPUT);
}

SensorData read_sensor_data() {
    SensorData data;
    data.wiper_position = analogRead(34);
    data.vibration_level = analogRead(35);
    return data;
}
