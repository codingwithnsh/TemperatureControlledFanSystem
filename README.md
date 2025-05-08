# 🌡️ Temperature-Controlled Fan System

This project uses an **Arduino** and a **DHT11 Temperature Sensor** to automatically control a fan based on ambient temperature. When the temperature exceeds a predefined threshold, a **relay** is triggered to turn on the fan. This simple automation project can be used for home cooling, server room temperature control, or any application requiring temperature-based fan control.

---

## 🔧 Features

- **Real-time Temperature Monitoring**: Uses a DHT11 sensor to monitor temperature.
- **Automatic Fan Control**: Turns the fan on when the temperature exceeds a set threshold.
- **Energy Efficiency**: The fan only runs when needed, saving power.
- **Easy to Build**: Basic components, easy setup, and scalable for various applications.

---

## 🧰 Components Required

| Component                         | Quantity |
|-----------------------------------|----------|
| **Arduino (Uno or Nano)**         | 1        |
| **DHT11 Temperature Sensor**      | 1        |
| **Relay Module (5V)**             | 1        |
| **Fan (5V or 12V)**               | 1        |
| **Diode (1N4007)**                | 1        |
| **Jumper Wires and Breadboard**   | As needed |
| **220Ω Resistor (Optional for LED)** | 1      |

---

## 🔌 Circuit Overview

### **DHT11 Temperature Sensor:**
- **VCC** → **5V** pin on Arduino
- **GND** → **GND** pin on Arduino
- **DATA** → **Digital Pin 2** on Arduino

### **Relay Module:**
- **VCC** → **5V** pin on Arduino
- **GND** → **GND** pin on Arduino
- **IN** → **Digital Pin 3** on Arduino
- **NO (Normally Open)** → Connected to **Fan's positive wire**
- **COM (Common)** → Connected to **Fan's power supply**

---

## 💻 Code

The main Arduino code for the fan control can be found in the file `fan_control.ino`. Below is a brief explanation of how it works:

1. **DHT11 Sensor**: Reads the ambient temperature every 2 seconds.
2. **Fan Control**: 
   - If the temperature exceeds the threshold (e.g., 30°C), the relay pin is set HIGH, turning on the fan.
   - If the temperature is below the threshold, the relay pin is set LOW, turning off the fan.
3. **Threshold Adjustment**: The `tempThreshold` can be easily modified to suit different environments.

---

## 📦 Additional Resources

- **Relay Module**: [Relay Module on Amazon](https://www.amazon.com/dp/B07JYV2PHH)
- **DHT11 Sensor**: [DHT11 Sensor on Amazon](https://www.amazon.com/dp/B01LZ1G7Z0)
- **Arduino Uno**: [Arduino Uno on Amazon](https://www.amazon.com/dp/B008GRTSV6)

---

## 📜 License

This project is for educational purposes. You are free to modify and build upon the design, but the code is protected under internal policies and is shared only for personal, non-commercial use.

---

## 🙋‍♂️ Author

Created by **[Your Name]**, a passionate maker working on DIY automation and cooling solutions.
