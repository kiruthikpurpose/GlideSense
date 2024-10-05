import random
import time

class SensorSimulator:
    def __init__(self):
        pass

    def read_sensor_data(self):
        data = {
            'wiper_position': random.randint(0, 100),
            'vibration_level': random.randint(0, 10)
        }
        return data

    def simulate_delay(self, seconds):
        time.sleep(seconds)
