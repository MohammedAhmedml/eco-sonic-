# Eco-Sonic
## Sustainable Water Recovery and Waste Energy Harvesting in Data Centers

> An integrated prototype concept for water recovery, resource-efficient cooling support, and waste-energy harvesting using ESP32-based monitoring and control.

[![Status](https://img.shields.io/badge/Status-Planning-orange)]()
[![Controller](https://img.shields.io/badge/Controller-ESP32-blue)]()
[![Project](https://img.shields.io/badge/Project-Sustainable%20Infrastructure-green)]()

---

## 1. Project Overview

Eco-Sonic is a proposed sustainable infrastructure system designed to investigate how water recovery and low-grade waste energy harvesting can be integrated into data-center cooling support systems.

The project focuses on:

1. Recovering and treating suitable wastewater for potential non-potable reuse.
2. Demonstrating controlled water circulation through a small-scale prototype.
3. Investigating energy harvesting from flowing water and mechanical vibrations.
4. Monitoring water and environmental parameters using an ESP32.
5. Demonstrating how recovered resources could support sustainable data-center operations.

The prototype is intended for engineering demonstration and experimental evaluation. It is not a certified data-center cooling or drinking-water treatment system.

---

## 2. Problem Statement

Data centers require reliable cooling and consume significant quantities of water and energy, depending on their cooling architecture and operating conditions.

Conventional cooling systems may involve water losses through evaporation, blowdown, leakage, and maintenance operations. At the same time, mechanical vibrations, airflow, and flowing water represent possible sources of low-grade energy.

Eco-Sonic investigates whether selected wastewater streams can be recovered and treated for appropriate non-potable uses while demonstrating small-scale energy harvesting and intelligent monitoring.

### Key challenges

- Water consumption and water losses in cooling operations.
- Need for appropriate treatment and reuse of wastewater.
- Energy consumption associated with pumping and auxiliary systems.
- Underutilized low-grade mechanical and hydraulic energy.
- Limited visibility into water quality and prototype operating conditions.

---

## 3. Proposed Solution

Eco-Sonic combines four experimental subsystems:

### A. Water Recovery and Treatment

A small-scale water treatment train investigates the removal of suspended solids and selected contaminants from a simulated or appropriately characterized wastewater stream.

Possible treatment stages include:

- Sediment filtration.
- Mesh and sponge prefiltration.
- Activated carbon filtration.
- Fine filtration.
- Membrane filtration, where appropriate.
- UV-C treatment as an experimental disinfection stage.

Treatment selection depends on the feedwater characteristics and the intended reuse application.

### B. Hydraulic Energy Harvesting

A pump circulates water through a controlled flow path containing a small water wheel and generator.

The system investigates:

- Water flow rate.
- Generator voltage.
- Electrical current.
- Power output.
- Energy conversion efficiency.

The harvested energy is intended for experimental measurement or low-power demonstration loads.

### C. Mechanical and Acoustic Energy Harvesting

Piezoelectric elements and vibration components are used to investigate energy harvesting from mechanical vibration.

Potential sources include:

- Pump vibration.
- Fan vibration.
- Controlled vibration from a laboratory actuator.
- Acoustic excitation in a small resonance chamber.

The prototype will measure whether the harvested electrical output is practically useful at small scale.

### D. ESP32 Monitoring and Control

The ESP32 collects sensor data and supports monitoring of:

- Water temperature.
- Ambient temperature and humidity.
- Water level.
- Flow rate.
- Voltage and current.
- Vibration.
- Selected water-quality indicators.

The controller may also support pump switching, alarms, and display output.

---

## 4. System Architecture

The proposed system consists of a water circulation loop, experimental treatment stages, energy-harvesting modules, and a monitoring controller.

```text
             WATER RECOVERY LOOP

       +---------------------------+
       |       Water Reservoir     |
       +-------------+-------------+
                     |
                     v
       +---------------------------+
       |      Sediment Filter      |
       +-------------+-------------+
                     |
                     v
       +---------------------------+
       | Activated Carbon / Fine   |
       |       Filtration          |
       +-------------+-------------+
                     |
                     v
       +---------------------------+
       | Optional Membrane / UV-C  |
       |    Experimental Stage     |
       +-------------+-------------+
                     |
                     v
       +---------------------------+
       |     Treated Water Tank    |
       +-------------+-------------+
                     |
                     v
       +---------------------------+
       |       DC Water Pump       |
       +-------------+-------------+
                     |
                     v
       +---------------------------+
       | Water Wheel + Generator   |
       +-------------+-------------+
                     |
                     v
       +---------------------------+
       | Return / Demonstration    |
       |       Flow Path           |
       +---------------------------+


             MONITORING SYSTEM

       +---------------------------+
       |       ESP32 Controller     |
       +-------------+-------------+
                     |
          +----------+----------+
          |          |          |
          v          v          v
       Sensors    Display    Actuators
       and ADC    / Data     Pump / Fan
                  Logging
```

This architecture is a conceptual design. The final piping, treatment stages, sensor selection, and control logic will be determined during prototype development.

---

## 5. Working Principle

### Step 1: Water circulation

A DC pump moves water from a reservoir through the experimental flow loop.

### Step 2: Filtration and treatment

The water passes through selected filtration and treatment stages. The effectiveness of each stage is evaluated using suitable measurements.

### Step 3: Hydraulic energy harvesting

A water wheel drives a small generator. The electrical output is rectified and conditioned for measurement or a suitable low-power load.

### Step 4: Vibration energy harvesting

Piezoelectric components are exposed to controlled mechanical vibration. The resulting electrical output is measured.

### Step 5: Sensor monitoring

The ESP32 records operating conditions, including water temperature, flow, level, and electrical parameters.

### Step 6: Data analysis

Experimental data is used to calculate flow characteristics, energy output, and resource-recovery performance.

---

## 6. Innovation

Eco-Sonic explores the integration of water recovery, low-grade energy harvesting, and embedded monitoring in a single educational prototype.

The proposed innovation is the system-level combination of:

- Water-recovery experimentation.
- Hydraulic energy harvesting.
- Vibration-based energy harvesting.
- ESP32 monitoring and control.
- Resource-efficiency analysis.

The project does not assume that harvested energy will replace the primary energy supply of a data center. Instead, it investigates whether small quantities of otherwise unused energy can support low-power monitoring or demonstrate measurable resource recovery.

---

## 7. Prototype Hardware

The prototype is planned around an ESP32 development board and a modular water circulation system.

### Mechanical structure

- MDF or plywood baseboard.
- Acrylic sheets and brackets.
- PVC foam board.
- Aluminium angles.
- Nuts, bolts, washers, and screws.
- Rubber feet and cable-management accessories.
- Printed labels and an acrylic information board.

### Water circulation

- Transparent water tanks and reservoirs.
- PVC and silicone tubing.
- Bulkhead connectors and fittings.
- Water valves, check valves, and flow-control components.
- DC water pump.
- Water wheel and generator assembly.

### Energy harvesting

- DC motor used as a generator.
- Bridge rectifier and Schottky diodes.
- Capacitors and supercapacitor.
- DC-DC boost and buck converters.
- Rechargeable battery and protection module.
- Piezoelectric discs and strips.
- Vibration plates and mounting components.

### Monitoring and control

- ESP32 development board.
- Temperature sensors.
- Flow and water-level sensors.
- Voltage and current sensors.
- Vibration and sound sensors.
- OLED or I2C LCD display.
- Relay and MOSFET driver modules.
- LEDs, buzzer, switches, and emergency cutoff.

### Water treatment and measurement

- Sediment filter and cartridge.
- Activated carbon.
- Fine filtration components.
- Optional hollow-fibre or RO membrane.
- TDS meter.
- pH, turbidity, and conductivity sensors.
- UV-C module with appropriate enclosure and safety controls.

A complete bill of materials is available in:

`prototype/bill-of-materials.md`

---

## 8. ESP32 Firmware

The ESP32 firmware will provide the foundation for sensor monitoring and control.

Planned functions:

- Sensor initialization.
- Periodic sensor readings.
- Analog voltage and current measurement.
- Flow-rate measurement.
- Water-level monitoring.
- Temperature monitoring.
- Display output.
- Pump and fan control.
- Fault and emergency cutoff handling.
- Serial data logging.

The firmware will be developed incrementally as the hardware is assembled.

Firmware directory:

`firmware/`

---

## 9. Experimental Methodology

The project will use controlled experiments to evaluate prototype performance.

### Water system measurements

- Initial and final water volume.
- Flow rate.
- Water temperature.
- Water-quality measurements before and after treatment.
- Filter pressure or flow restriction, where measurable.
- Pump operating voltage and current.

### Hydraulic energy measurements

- Generator voltage.
- Generator current.
- Electrical power.
- Flow rate.
- Pressure or head, where measurable.
- Energy harvested over a defined time period.

### Vibration energy measurements

- Vibration source.
- Vibration frequency, where measurable.
- Piezoelectric voltage.
- Rectified voltage.
- Load current.
- Power delivered to a defined electrical load.

### Environmental measurements

- Ambient temperature.
- Humidity.
- Enclosure temperature.
- Fan operating condition.

---

## 10. Performance Metrics

The following equations will be used for experimental analysis.

### Electrical power

P = V × I

Where:

- P = electrical power in watts.
- V = measured voltage in volts.
- I = measured current in amperes.

### Harvested energy

E = P × t

Where:

- E = energy in joules when P is in watts and t is in seconds.
- P = measured electrical power.
- t = measurement duration.

### Water recovery ratio

Water Recovery Ratio (%) =

(Recovered Water Volume / Input Water Volume) × 100

The recovery ratio must be reported together with the definition of recovered water and the measurement period.

### Pumping energy

E_pump = V_pump × I_pump × t

This value can be compared with the energy harvested by the water-wheel generator.

### Net energy balance

Net Energy = Harvested Energy − Pumping Energy

The project will report whether the harvesting subsystem produces a net gain or merely demonstrates energy conversion.

---

## 11. Expected Outcomes

The prototype aims to demonstrate:

- Controlled water circulation.
- A modular water treatment flow path.
- ESP32-based monitoring.
- Measurable hydraulic energy generation.
- Measurable vibration-energy generation.
- Data collection for resource-efficiency analysis.
- A documented engineering pathway toward larger-scale research.

All numerical performance values will be added after testing. No energy output, water savings, or treatment efficiency is claimed until it has been measured and documented.

---

## 12. Safety and Limitations

This prototype is for controlled engineering demonstration.

### Safety requirements

- Use low-voltage DC components where practical.
- Include fuses and an emergency cutoff.
- Keep electrical connections protected from water.
- Use appropriate insulation and waterproof enclosures.
- Do not expose people to UV-C radiation.
- Operate UV-C components only in a suitable enclosed system.
- Use appropriate eye and skin protection during maintenance.
- Do not use untreated or experimental water for drinking.
- Do not connect the prototype to a live data-center cooling system.

### Technical limitations

- A laboratory water loop does not reproduce full-scale data-center cooling conditions.
- Small generators may produce limited power.
- Pumping energy may exceed harvested hydraulic energy.
- Piezoelectric output depends strongly on vibration conditions and load.
- Water treatment performance depends on the actual feedwater composition.
- UV-C exposure and treatment effectiveness require appropriate engineering validation.
- Membrane systems require suitable pressure, pretreatment, and maintenance.

---

## 13. Future Scope

Future development may include:

1. Characterization of real cooling-system wastewater.
2. Optimization of treatment stages for a defined reuse application.
3. Automated water-quality monitoring.
4. Improved hydraulic energy harvesting.
5. Vibration-energy harvesting optimization.
6. Cloud-based data logging and dashboard development.
7. Energy and water lifecycle assessment.
8. Pilot-scale testing under controlled industrial conditions.
9. Evaluation of water reuse for suitable non-potable applications.
10. Integration with a data-center digital monitoring platform.

---

## 14. Repository Structure

```text
docs/        Project documentation
prototype/   Hardware, diagrams, and assembly
firmware/    ESP32 code
data/        Experimental readings
media/       Images, diagrams, and videos
results/     Testing and analysis
```

---

## 15. Project Status

**Current status: Planning**

The system architecture, components, experimental methodology, and firmware structure are being prepared.

The prototype will be updated as hardware is assembled and validated.

---

## 16. Team

- Project: Eco-Sonic
- Controller: ESP32
- Application: Sustainable data-center infrastructure
- Focus: Water recovery, energy harvesting, and embedded monitoring

Mohammed Ahmed Iqbal (TL),
Khagesh Kumar Sharma ,
Hania Rahim,
Arsalur Rehman Saadi,
Saleena Asim,
Prateek Singh,
COMPUTER SCIENCE, ELECTRICAL DEPARTMENTS.
DR APJ ABDUL KALAM TECHNICAL UNIVERSITY 
.



## 17. License

This project is intended for educational and research purposes.

A suitable open-source license will be selected before publication.
