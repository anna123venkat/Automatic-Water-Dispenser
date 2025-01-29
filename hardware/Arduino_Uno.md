# Arduino Uno Specifications and Details

The Arduino Uno is a versatile microcontroller board widely used for prototyping and embedded systems projects. It is the core component of the Automatic Water Dispenser project.

## **Specifications**

### **Microcontroller**
- **Model**: ATmega328P
- **Clock Speed**: 16 MHz
- **Flash Memory**: 32 KB (0.5 KB used by the bootloader)
- **SRAM**: 2 KB
- **EEPROM**: 1 KB

### **Operating Voltage**
- **Logic Level**: 5V
- **Input Voltage (recommended)**: 7-12V
- **Input Voltage (limits)**: 6-20V

### **Input/Output Pins**
- **Digital I/O Pins**: 14 (6 provide PWM output)
  - PWM Pins: 3, 5, 6, 9, 10, 11
- **Analog Input Pins**: 6 (A0 to A5)
  - Resolution: 10-bit ADC
- **Pin Headers**: Male headers for easy connections
- **Communication Pins**:
  - UART: RX (Pin 0), TX (Pin 1)
  - I2C: SDA (A4), SCL (A5)
  - SPI: MOSI (11), MISO (12), SCK (13), SS (10)

### **Connectivity**
- **USB Port**: Type-B connector for programming and power
- **Power Jack**: Barrel jack for external power supply

### **Power**
- **VIN**: External power input (6-12V)
- **5V**: Regulated 5V output from onboard regulator
- **3.3V**: 3.3V output from onboard regulator (50mA max)
- **GND**: Multiple ground pins

### **Physical Dimensions**
- **Length**: 68.6 mm
- **Width**: 53.4 mm
- **Weight**: ~25 grams

## **Features**

### **User-Friendly Interface**
- Ideal for beginners and hobbyists.
- Simple programming via the Arduino IDE.

### **Expandability**
- Compatible with a wide range of shields for extended functionality.
- Supports additional modules for wireless communication, motor control, and sensor integration.

### **Programming Environment**
- **Arduino IDE**: An easy-to-use platform for writing, compiling, and uploading code.
  - Supports both online (web-based) and offline IDE options.
- **Languages Supported**: Simplified C/C++.

### **Built-In Features**
- **LED_BUILTIN (Pin 13)**: Onboard LED for debugging.
- **RESET Button**: Manual reset functionality.

### **Versatility**
- Suitable for a variety of projects such as IoT systems, robotics, and automation.

## **Pinout Diagram**

| **Pin**      | **Function**                  |
|--------------|-------------------------------|
| 0 (RX), 1 (TX) | Serial communication         |
| 2-13         | Digital I/O pins              |
| 3, 5, 6, 9, 10, 11 | PWM-enabled digital pins   |
| A0-A5        | Analog inputs                 |
| VIN          | Input power supply            |
| GND          | Ground pins                   |
| 5V, 3.3V     | Voltage outputs               |
| RESET        | Manual reset                  |

---

## **Applications in the Project**

In the Automatic Water Dispenser project, the Arduino Uno performs the following tasks:

1. **Sensor Data Processing**:
   - Reads input from the IR sensor to detect objects (cups).
   - Monitors water level data from the water level sensor.

2. **Control Mechanisms**:
   - Activates or deactivates the pump relay to dispense water.
   - Controls the refill pump relay when water levels are low.

3. **Real-Time Monitoring**:
   - Provides real-time data via the Serial Monitor for debugging and monitoring.

---

## **References**
- [Arduino Uno Official Documentation](https://www.arduino.cc/en/Guide/ArduinoUno)
- [TutorialsPoint - Arduino Uno](https://www.tutorialspoint.com/arduino/arduino_overview.htm)
