#include <stdio.h>
#include "sensors.h"
#include "control.h"
#include "utils.h"

int main() {
    initialize_sensors();
    initialize_control();

    while (1) {
        SensorData sensor_data = read_sensor_data();
        adjust_wiper_control(sensor_data);
        simulate_delay(100);
    }

    return 0;
}
