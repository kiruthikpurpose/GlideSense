class WiperControl:
    def __init__(self):
        self.max_wiper_speed = 10
        self.min_wiper_speed = 1
        self.vibration_threshold = 5
        self.pressure_increase = 1
        self.pressure_default = 5
        self.wiper_speed = self.max_wiper_speed
        self.wiper_pressure = self.pressure_default

    def adjust_wiper_control(self, data):
        if data['vibration_level'] > self.vibration_threshold:
            self.wiper_pressure += self.pressure_increase
            if self.wiper_pressure > 10:
                self.wiper_pressure = 10
            print(f"Increased wiper pressure to {self.wiper_pressure}.")
        else:
            self.wiper_pressure = self.pressure_default
            print(f"Wiper pressure reset to {self.wiper_pressure}.")

        if data['wiper_position'] > 80:
            self.wiper_speed = self.min_wiper_speed
            print(f"Slowed wiper speed to {self.wiper_speed}.")
        elif data['wiper_position'] < 20:
            self.wiper_speed = self.max_wiper_speed
            print(f"Increased wiper speed to {self.wiper_speed}.")
        else:
            self.wiper_speed = (self.max_wiper_speed + self.min_wiper_speed) // 2
            print(f"Maintaining wiper speed at {self.wiper_speed}.")

        print(f"Wiper Position: {data['wiper_position']}, Vibration Level: {data['vibration_level']}, "
              f"Wiper Speed: {self.wiper_speed}, Wiper Pressure: {self.wiper_pressure}")
