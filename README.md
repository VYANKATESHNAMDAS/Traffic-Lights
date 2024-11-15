# Traffic Light Controller Project using 8051 Microcontroller

## Project Overview
This project simulates a traffic light controller using the AT89C51 microcontroller (8051 family).
The system manages traffic lights at a 4-way intersection, with each intersection displaying Red, Yellow, and Green lights in a programmed sequence. The project includes a Proteus simulation, schematic, PCB design, and a 3D view.

### Components Used
  - 1]AT89C51 Microcontroller
  - 2]LEDs - 12 (4 Red, 4 Yellow, 4 Green)
  - 3]Resistors - 330Ω (12) for LEDs
  - 4]Crystal Oscillator - 11.0592 MHz
  - 5]Capacitors - 22pF (2) for oscillator, 10 µF for reset
  - 6]Push Button (optional) - for reset circuit

### Features
  - 4-way traffic light control: Red, Yellow, and Green LEDs are controlled for four intersections.
  - Sequential timing: Each intersection turns green, allowing traffic, while the others remain red.
  - Code in Embedded C: The control logic is implemented in Embedded C, providing precise timing and sequence management.

### Circuit Schematic
The schematic shows the connections for the AT89C51 microcontroller and LEDs for each intersection. The oscillator circuit and reset circuit are included for stable operation.

### PCB Design
The PCB design was created in Proteus, showing the placement and routing for the microcontroller, LEDs, resistors, and supporting components.

### 3D View
The 3D view of the PCB is generated using Proteus to visualize the final hardware setup.

### How It Works
  - delay() Function: Implements a basic delay loop to simulate the duration of each light.
  - Traffic Light Sequence: Each intersection turns Green for a specific period (5 seconds), followed by a Yellow period (2 seconds), then switches back to Red.
  - Control Logic: Red, Yellow, and Green LEDs for each intersection are controlled using microcontroller pins.

### Simulation Instructions
  - Load the Hex File: Compile the code and load the resulting hex file onto the AT89C51 in Proteus.
  - Run the Simulation: In Proteus, click "Run" to start the simulation and observe the traffic light sequence.

### How to Use
  - Open the PCB Design in Proteus: Use the .pdsprj file in Proteus to view the schematic and PCB layout.
  - 3D View: The 3D view provides a visual representation of the final layout and component placement.
  - Run Code on Hardware: Flash the hex file onto an AT89C51 microcontroller and connect the circuit as per the schematic for hardware implementation.
