#ifndef SENSORS_H
#define SENSORS_H

typedef struct {
    int wiper_position;
    int vibration_level;
} SensorData;

void initialize_sensors();
SensorData read_sensor_data();

#endif
