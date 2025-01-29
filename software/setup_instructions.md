# Setup Instructions for Automatic Water Dispenser

## Table of Contents
1. [Hardware Setup](#hardware-setup)
2. [Software Installation](#software-installation)
3. [Circuit Connections](#circuit-connections)
4. [Code Upload](#code-upload)
5. [Testing and Operation](#testing-and-operation)

---

## Hardware Setup
1. Gather the required components:
   - Arduino Uno
   - Water Sensor
   - IR Sensor
   - Relay Module
   - Motor Pump
   - Jumper Wires
   - Breadboard
   - Two Water Containers
   - USB Cable
   - 9V Battery

2. Place the components securely on the breadboard or appropriate mounts.

---

## Software Installation
1. Download and install the **Arduino IDE**:
   - [Arduino IDE Official Download](https://www.arduino.cc/en/software)

2. Install the necessary libraries (if applicable) via the Arduino Library Manager.

---

## Circuit Connections
1. **Water Sensor**:
   - VCC to Arduino 5V
   - GND to Arduino GND
   - Signal pin to Arduino A0

2. **IR Sensor**:
   - VCC to Arduino 5V
   - GND to Arduino GND
   - OUT pin to Arduino Digital Pin 2

3. **Relay Module**:
   - VCC to Arduino 5V
   - GND to Arduino GND
   - IN1 to Digital Pin 8 (Pump Control)
   - IN2 to Digital Pin 9 (Refill Control)

4. **Motor Pump**:
   - Connect through the relay's common (COM) and normally open (NO) terminals.
   - Use external power if necessary.

5. Ensure proper grounding for all components.

---

## Code Upload
1. Open the Arduino IDE.
2. Copy the provided source code from the implementation section of the project.
3. Select the correct **Board** and **Port**:
   - Board: `Arduino Uno`
   - Port: Select the COM port detected for your Arduino.
4. Click the **Upload** button to upload the code to the Arduino.

---

## Testing and Operation
1. Power the system using the USB cable or a 9V battery.
2. Place the water containers and ensure they are properly connected to the pump.
3. Test the following scenarios:
   - Dispensing water when an object (e.g., a cup) is detected near the IR sensor.
   - Automatic refilling when the water level sensor detects a low level.
4. Monitor the serial output for debugging and validation.

---

## Troubleshooting
- **No response from sensors**: Check connections and ensure components are powered correctly.
- **Pump not activating**: Verify relay connections and ensure the Arduino pins are functioning.
- **Erratic behavior**: Confirm the threshold values in the code match your setup requirements.

For more detailed information, refer to the [project report](#) or contact the development team.
