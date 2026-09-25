# Eco-Sonic: Sustainable Water Recovery and Waste Energy Harvesting in Data Centers

> An integrated engineering prototype concept for investigating water recovery, resource-efficient cooling support, and low-grade waste-energy harvesting in data-center environments.

[![Status](https://img.shields.io/badge/Status-Planning-orange)]()
[![Controller](https://img.shields.io/badge/Controller-ESP32-blue)]()
[![Project](https://img.shields.io/badge/Focus-Water%20%7C%20Energy%20%7C%20IoT-green)]()

## 1. Project Overview

Eco-Sonic investigates how water recovery, low-grade energy harvesting, and embedded monitoring can be combined in a small-scale data-center infrastructure prototype.

The prototype focuses on:

- Recovering and treating an appropriately simulated or characterized wastewater stream for suitable non-potable reuse research.
- Demonstrating controlled water circulation.
- Investigating hydraulic energy harvesting using a water wheel and small generator.
- Investigating vibration/acoustic energy harvesting using piezoelectric elements.
- Monitoring system conditions with an ESP32.
- Collecting experimental data for water, energy, and operating-performance analysis.

**Important:** The project is an educational/research prototype. It is not a certified data-center cooling system, drinking-water treatment plant, or industrial-scale energy source.

## 2. Problem Statement

Data centers require reliable cooling and resource-intensive infrastructure. Depending on cooling architecture and operating conditions, water can be lost through evaporation, blowdown, leakage, and maintenance operations.

At the same time, low-grade mechanical, hydraulic, thermal, and acoustic energy may exist around pumps, fans, airflow, and vibration sources.

Eco-Sonic explores whether selected water streams can be recovered and treated for an appropriate reuse application while demonstrating measurable recovery of otherwise unused low-grade energy.

### Key challenges

- Water consumption and wastewater management.
- Need for appropriate treatment before reuse.
- Energy consumption of pumping and auxiliary systems.
- Underutilized low-grade mechanical and hydraulic energy.
- Need for continuous monitoring of water and operating parameters.

## 3. Proposed Solution

Eco-Sonic combines four experimental subsystems:

### A. Water Recovery and Treatment

A modular treatment path can include:

1. Sediment/pre-filtration.
2. Mesh or sponge filtration.
3. Activated carbon.
4. Fine filtration.
5. Optional membrane filtration.
6. Optional enclosed UV-C experimental stage.

The exact treatment train will depend on the feedwater characteristics and intended reuse application.

### B. Hydraulic Energy Harvesting

A pump circulates water through a controlled flow path containing a water wheel and small generator.

The prototype measures:

- Flow rate.
- Generator voltage.
- Generator current.
- Electrical power.
- Energy over time.
- Pump electrical input.

The energy balance will determine whether the harvesting stage produces useful output or primarily demonstrates energy conversion.

### C. Vibration and Acoustic Energy Harvesting

Piezoelectric elements are mounted on controlled vibration structures. A vibration motor or small speaker can provide repeatable laboratory excitation.

Potential sources for future investigation include pump and fan vibration.

### D. ESP32 Monitoring and Control

The ESP32 acts as the main controller for the prototype.

Planned measurements include:

- Water temperature.
- Ambient temperature/humidity.
- Water level.
- Flow rate.
- Voltage.
- Current.
- Vibration.
- Selected water-quality parameters.

It can also control selected low-voltage loads through appropriate drivers.

## 4. System Architecture

```text
                         ECO-SONIC PROTOTYPE

      WATER RECOVERY / TREATMENT LOOP
      ┌──────────────────────────────────────────────┐
      │                                              │
      │  Reservoir → Pre-filter → Treatment → Tank   │
      │      ↑                              │         │
      │      │                              ↓         │
      │      └──────── Pump ← Water Wheel ←┘         │
      │                       │                      │
      │                       ↓                      │
      │                 Small Generator             │
      └──────────────────────────────────────────────┘

                    ENERGY HARVESTING
      ┌──────────────────────────────────────────────┐
      │ Hydraulic: Water Wheel → Generator →        │
      │            Rectifier → Conditioning → Load   │
      │                                              │
      │ Vibration: Vibration Source → Piezo →       │
      │            Rectifier/Storage → Load          │
      └──────────────────────────────────────────────┘

                    MONITORING & CONTROL
      ┌──────────────────────────────────────────────┐
      │ Sensors → ESP32 → Display / Data Logging     │
      │                │                             │
      │                └→ Pump / Fan / Alarm Control │
      └──────────────────────────────────────────────┘
```

## 5. Working Principle

### Step 1 — Water circulation

A low-voltage DC pump moves water from a reservoir through the experimental flow loop.

### Step 2 — Treatment

The water passes through selected filtration/treatment stages. Measurements before and after treatment are recorded where applicable.

### Step 3 — Hydraulic harvesting

Water is directed through a water wheel. Mechanical rotation drives a small DC motor used as a generator.

### Step 4 — Electrical conditioning

The generator output can be rectified, filtered, and conditioned before being connected to an appropriate measurement load or storage element.

### Step 5 — Vibration harvesting

Piezoelectric elements respond to controlled mechanical vibration. Their electrical output is measured under defined load conditions.

### Step 6 — Monitoring

The ESP32 collects sensor readings and can display or log system parameters.

### Step 7 — Analysis

Measured data is used to calculate flow, electrical power, energy harvested, water recovery, and the energy balance of the prototype.

## 6. Innovation

Eco-Sonic explores the system-level integration of:

- Water recovery experimentation.
- Modular filtration/treatment.
- Hydraulic energy harvesting.
- Vibration-based energy harvesting.
- ESP32 monitoring and control.
- Experimental resource-efficiency analysis.

The project does **not** assume that harvested energy can replace the primary power supply of a data center. Its purpose is to quantify and evaluate low-grade energy recovery at prototype scale.

## 7. Prototype Hardware

The complete 150-item bill of materials is in `prototype/bill-of-materials.md`.

Major subsystems include:

- Structural frame and transparent enclosures.
- Water tanks and plumbing.
- DC pump and hydraulic loop.
- Water wheel and generator.
- Electrical conditioning and storage.
- Piezoelectric vibration harvesting.
- ESP32 and sensors.
- Displays and control electronics.
- Filtration and experimental water-quality measurement.
- Safety and electrical protection.
- Demonstration materials.

## 8. ESP32 Firmware

The firmware is located in `firmware/`.

Planned functions:

- Sensor initialization.
- Periodic measurements.
- Voltage/current monitoring.
- Flow and water-level monitoring.
- Temperature monitoring.
- Display output.
- Pump/fan control.
- Alarm handling.
- Serial data logging.

The current firmware is a starter template and must be adapted to the exact sensors and modules used.

## 9. Experimental Methodology

### Water system

Record:

- Input volume.
- Output/recovered volume.
- Flow rate.
- Water temperature.
- Pump voltage/current.
- Water-quality measurements.
- Treatment stages used.

### Hydraulic energy harvesting

Record:

- Flow rate.
- Generator voltage.
- Load current.
- Electrical power.
- Test duration.
- Energy harvested.
- Pump electrical input.

### Vibration harvesting

Record:

- Vibration source.
- Frequency if measurable.
- Piezoelectric configuration.
- Open-circuit voltage.
- Loaded voltage/current.
- Power delivered to a defined load.

## 10. Performance Metrics

### Electrical power

`P = V × I`

### Energy

`E = P × t`

where time is expressed in seconds for joules.

### Water recovery ratio

`Recovery (%) = Recovered Water Volume / Input Water Volume × 100`

### Pump input energy

`E_pump = V_pump × I_pump × t`

### Prototype energy balance

`Net Energy = Harvested Energy − Pumping Energy`

All values will be populated from measured experimental data. No performance number is claimed before testing.

## 11. Expected Outcomes

The prototype aims to demonstrate:

- Controlled water circulation.
- A modular treatment flow path.
- ESP32-based monitoring.
- Measurable hydraulic energy generation.
- Measurable piezoelectric energy generation.
- Experimental data collection.
- A documented pathway toward larger-scale research.

## 12. Safety and Limitations

- Use low-voltage DC hardware wherever practical.
- Protect electrical connections from water.
- Use fuses and an emergency cutoff.
- Use waterproof electrical enclosures where required.
- Do not expose people to UV-C radiation.
- Operate UV-C only in a properly enclosed system.
- Do not use experimental/untreated water for drinking.
- Do not connect the prototype to a live data-center cooling system.
- Membrane and UV stages require appropriate engineering validation.
- Small-scale energy harvesting may produce less energy than the pump consumes.

## 13. Future Scope

- Characterize real cooling-system wastewater.
- Optimize treatment for a defined reuse application.
- Add automated water-quality monitoring.
- Improve hydraulic harvesting efficiency.
- Optimize piezoelectric mounting.
- Add dashboard/cloud logging.
- Perform lifecycle water/energy analysis.
- Evaluate pilot-scale implementation under controlled conditions.

## 14. Repository Structure

```text
eco-sonic/
├── README.md
├── LICENSE
├── .gitignore
├── docs/
├── prototype/
├── firmware/
├── data/
├── media/
└── results/
```

## 15. Project Status

**Current status: Planning**

System architecture, prototype components, documentation, testing methodology, and firmware structure are being prepared.

Measured results, prototype photographs, CAD files, and finalized circuit diagrams will be added during development.

## 16. Team

Add:

- Team name:
- Team members:
- Institution:
- Department:
- Mentor:
- Competition/hackathon:

## 17. License

This project is released for educational and research purposes under the MIT License. See `LICENSE`.
