# Automatic-Night-Lamp
A mini project built using Arduino Uno and LDR Sensor Module,
simulated on Wokwi Simulator.

## Components Used
- Arduino Uno
- LDR Sensor Module
- LED
- 220Ω Resistor

## How It Works
- When it is DARK → LDR reads below 500 → LED turns ON
- When it is BRIGHT → LDR reads above 500 → LED turns OFF

## Circuit
- LDR VCC → Arduino 5V
- LDR GND → Arduino GND
- LDR DO → Arduino D2
- LDR AO → Arduino A0
- LED(+) → 220Ω → Arduino D13
- LED(−) → Arduino GND

## Wokwi Simulation
[Click here to view simulation](PASTE YOUR WOKWI LINK HERE)

## Platform
Wokwi Online Simulator
