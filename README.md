# Motorcycle Tilt Sensor Alarm Prototype

A hardware proof-of-concept for a motorcycle anti-theft security system utilizing a digital tilt-switch sensor.

## Description
This project was developed as an experimental prototype for a custom motorcycle alarm system. It utilizes a digital tilt switch to detect changes in the vehicle's physical orientation. The firmware continuously polls the sensor state, triggering immediate visual alerts via local hardware indicators whenever a tilt or displacement event is registered.

## Features
- **Orientation Tracking:** Instant digital state evaluation of physical assets.
- **Low-Latency Interrupt/Polling:** Rapid response loop to detect sudden shifts or tampering.
- **Hardware Integration:** Simple digital pin mapping for external audio/visual alarm components.

## Hardware Stack
- Arduino Board
- Digital Tilt Switch Sensor (Ball/Mercury type)
- LED Indicator (Simulating an active alarm trigger)
