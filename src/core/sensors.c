#include "sensors.h"
#include <stdlib.h>

void initialize_sensors() {}

SensorData read_sensor_data() {
    SensorData data;
    data.wiper_position = rand() % 100;
    data.vibration_level = rand() % 10;
    return data;
}
