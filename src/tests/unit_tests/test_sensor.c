#include <assert.h>
#include "sensors.h"

void test_read_sensor_data() {
    SensorData data;
    data.wiper_position = 0;
    data.vibration_level = 0;

    // Mock sensor values
    pinMode(34, INPUT);
    pinMode(35, INPUT);
    analogWrite(34, 70);
    analogWrite(35, 5);
    data = read_sensor_data();

    assert(data.wiper_position == 70);
    assert(data.vibration_level == 5);
}

int main() {
    test_read_sensor_data();
    return 0;
}
