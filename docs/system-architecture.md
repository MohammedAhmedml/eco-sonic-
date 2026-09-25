# System Architecture

## High-Level Flow

```text
Reservoir
   ↓
Pre-filtration
   ↓
Treatment
   ↓
Recovered/Treated Water Tank
   ↓
Pump
   ↓
Flow Control
   ↓
Water Wheel
   ↓
Generator
   ↓
Electrical Conditioning
   ↓
Measurement / Storage / Load
   ↓
Return Flow
```

## Monitoring

```text
Sensors
  ↓
ESP32
  ├── Display
  ├── Data logging
  ├── Pump control
  ├── Fan control
  └── Alarm / safety logic
```

## Vibration subsystem

```text
Controlled vibration
        ↓
Piezoelectric element
        ↓
Rectification
        ↓
Capacitor / storage
        ↓
Measurement load
```

Detailed diagrams will be added to `prototype/circuit-diagrams/`.
