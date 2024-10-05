#include "control.h"
#include <stdio.h>
#include "sensors.h"

#define MAX_WIPER_SPEED 10
#define MIN_WIPER_SPEED 1
#define VIBRATION_THRESHOLD 5
#define PRESSURE_INCREASE 1
#define PRESSURE_DEFAULT 5

int wiper_speed = MAX_WIPER_SPEED;
int wiper_pressure = PRESSURE_DEFAULT;

void initialize_control() {
    wiper_speed = MAX_WIPER_SPEED;
    wiper_pressure = PRESSURE_DEFAULT;
}

void adjust_wiper_control(SensorData data) {
    if (data.vibration_level > VIBRATION_THRESHOLD) {
        wiper_pressure += PRESSURE_INCREASE;
        if (wiper_pressure > 10) wiper_pressure = 10;
        printf("Increased wiper pressure to %d.\n", wiper_pressure);
    } else {
        wiper_pressure = PRESSURE_DEFAULT;
        printf("Wiper pressure reset to %d.\n", wiper_pressure);
    }

    if (data.wiper_position > 80) {
        wiper_speed = MIN_WIPER_SPEED;
        printf("Slowed wiper speed to %d.\n", wiper_speed);
    } else if (data.wiper_position < 20) {
        wiper_speed = MAX_WIPER_SPEED;
        printf("Increased wiper speed to %d.\n", wiper_speed);
    } else {
        wiper_speed = (MAX_WIPER_SPEED + MIN_WIPER_SPEED) / 2;
        printf("Maintaining wiper speed at %d.\n", wiper_speed);
    }

    printf("Wiper Position: %d, Vibration Level: %d, Wiper Speed: %d, Wiper Pressure: %d\n",
           data.wiper_position, data.vibration_level, wiper_speed, wiper_pressure);
}
