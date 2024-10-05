#include "sensors.h"

void setup() {
    initialize_sensors();
    initialize_control();
}

void loop() {
    SensorData data = read_sensor_data();
    adjust_wiper_control(data);
}
