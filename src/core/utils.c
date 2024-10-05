#include "utils.h"
#include <unistd.h>

void simulate_delay(int ms) {
    usleep(ms * 1000);
}
