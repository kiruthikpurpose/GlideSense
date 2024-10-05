#include "sensors.h"
#include "control.h"
#include <wiringPi.h>

int main() {
    initialize_sensors();
    initialize_control();

    while (true) {
        SensorData data = read_sensor_data();
        adjust_wiper_control(data);
    }
    return 0;
}
