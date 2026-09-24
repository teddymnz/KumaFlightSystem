# Kuma Flight System

## Overview

Kuma Flight System is an experimental drone platform developed to integrate embedded systems engineering with space-system practices.

The system is developed around a dual-core **STM32H755ZI** microcontroller. This architecture allows critical functions to be separated from more application-oriented features while maintaining controlled communication between both domains.

## Dual-core architecture

- **Cortex-M7**: critical and deterministic functions, including stabilization, control loops, sensor acquisition, and safety mechanisms.
- **Cortex-M4**: application functions such as communication, telemetry, supervision, configuration, and data processing with less stringent real-time constraints.

The exact distribution of responsibilities will be defined progressively based on performance, latency, availability, and safety constraints. Communication between the two cores must be explicit, robust, and traceable.

## Development areas

- Real-time software architecture and M7/M4 partitioning;
- Sensor data acquisition and fusion;
- State estimation and flight control;
- Actuator and communication management;
- Telemetry, logging, and supervision;
- Fault detection and degraded modes;
- Unit tests, integration tests, and trials in a controlled environment.

## Repository organization

This project base is generated and configured with **STM32CubeMX**. Architectural choices, inter-core interfaces, and software components will be documented as they are integrated.

## Objectives

The final goal is to obtain a modular and scalable experimental drone platform that supports the application of engineering methods from aerospace and space systems, with particular attention to safety, verifiability, and interface control.