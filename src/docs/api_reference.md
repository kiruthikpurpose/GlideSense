# API Reference for GlideSense

## Functions

### `read_sensor_data()`
- **Description**: Reads data from the vibration and position sensors.
- **Returns**: `SensorData` structure containing the wiper position and vibration level.

### `adjust_wiper_control(SensorData data)`
- **Description**: Adjusts wiper speed and pressure based on sensor data.
- **Parameters**: `data` - Sensor data structure with current readings.

## Data Structures

### `SensorData`
- **wiper_position**: Current position of the wiper (int).
- **vibration_level**: Current vibration level detected (int).
