# ESP32 Firmware

## Current Status

Starter firmware only.

## Planned Modules

```text
sensor_manager
water_monitor
energy_monitor
pump_controller
display_manager
alarm_manager
data_logger
```

## Development Notes

Use the Arduino framework or PlatformIO.

Before deployment, verify:

- GPIO assignments.
- ADC scaling.
- Sensor supply voltage.
- Sensor signal range.
- Relay/MOSFET ratings.
- Pump current.
- Power supply capacity.

Never connect an unscaled higher voltage directly to an ESP32 ADC input.
