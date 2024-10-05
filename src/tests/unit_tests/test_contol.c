#include <assert.h>
#include "control.h"

void test_adjust_wiper_control() {
    SensorData test_data;

    test_data.vibration_level = 6;
    test_data.wiper_position = 50;
    adjust_wiper_control(test_data);
    assert(wiper_pressure == 6);
    assert(wiper_speed == 5);

    test_data.vibration_level = 3;
    test_data.wiper_position = 10;
    adjust_wiper_control(test_data);
    assert(wiper_pressure == 5);
    assert(wiper_speed == 10);

    test_data.vibration_level = 3;
    test_data.wiper_position = 90;
    adjust_wiper_control(test_data);
    assert(wiper_pressure == 5);
    assert(wiper_speed == 1);
}

int main() {
    test_adjust_wiper_control();
    return 0;
}
