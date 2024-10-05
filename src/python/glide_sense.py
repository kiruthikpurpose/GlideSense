from sensors_sim import SensorSimulator
from control_sim import WiperControl

def main():
    sensor_simulator = SensorSimulator()
    wiper_control = WiperControl()

    while True:
        sensor_data = sensor_simulator.read_sensor_data()
        wiper_control.adjust_wiper_control(sensor_data)
        sensor_simulator.simulate_delay(0.1)

if __name__ == "__main__":
    main()
