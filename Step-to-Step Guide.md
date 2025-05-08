# 🌡️ Step-by-Step Guide for Temperature-Controlled Fan System

This guide walks you through the process of building a **Temperature-Controlled Fan System** using an **Arduino**, **DHT11 Sensor**, and a **Relay Module** to automate your fan's operation based on the ambient temperature.

---

## 🛠️ What You’ll Need

- **Arduino (Uno/Nano)**: This will be the brain of the system, controlling the sensor and the relay.
- **DHT11 Sensor**: Used to monitor the temperature.
- **Relay Module**: To control the fan based on the sensor data.
- **Fan**: A 5V or 12V fan that will be controlled by the relay.
- **Diode (1N4007)**: To protect the relay from voltage spikes when switching.
- **Jumper Wires and Breadboard**: To make the connections between components.

---

## 💡 Circuit Connections

### **Step 1: Connect the DHT11 Sensor**
1. **VCC** → Connect to the **5V** pin on Arduino.
2. **GND** → Connect to the **GND** pin on Arduino.
3. **DATA** → Connect to **Digital Pin 2** on Arduino.

### **Step 2: Connect the Relay Module**
1. **VCC** → Connect to the **5V** pin on Arduino.
2. **GND** → Connect to **GND** pin on Arduino.
3. **IN** → Connect to **Digital Pin 3** on Arduino.
4. **NO (Normally Open)** → Connect to the **positive terminal of the fan**.
5. **COM (Common)** → Connect to the **fan’s power supply**.

### **Step 3: Connect the Fan**
1. Connect the fan’s power wire to the **NO** terminal of the relay.
2. Connect the fan’s ground wire to the **COM** terminal of the relay.

---

## 💻 Code File

The main code is located in the `fan_control.ino` file. You can find the code in the repository.

### How to Upload the Code:
1. Open the **Arduino IDE**.
2. Select your **Arduino model** under **Tools > Board**.
3. Select the correct **COM port** under **Tools > Port**.
4. Open the **fan_control.ino** file in Arduino IDE.
5. Click **Upload** to upload the code to your Arduino.

---

## ⚙️ Running the System

1. **Power on the system** using the Arduino and fan.
2. Open the **Serial Monitor** in the Arduino IDE to see the temperature readings.
3. If the temperature exceeds the threshold set in the code, the fan will automatically turn on.
4. If the temperature is below the threshold, the fan will turn off.

---

## 🧠 Troubleshooting Tips

- **Ensure all connections are correct**: Double-check the wiring of the sensor and relay.
- **Serial Monitor doesn’t show readings**: Make sure you have the correct **DHT11** library installed and the correct sensor pin defined in the code.
- **Fan doesn’t turn on/off**: Check the relay wiring and ensure the fan is powered correctly.

---

## 📦 Additional Resources

- **Relay Module**: [Relay Module on Amazon](https://www.amazon.com/dp/B07JYV2PHH)
- **DHT11 Sensor**: [DHT11 Sensor on Amazon](https://www.amazon.com/dp/B01LZ1G7Z0)
- **Arduino Uno**: [Arduino Uno on Amazon](https://www.amazon.com/dp/B008GRTSV6)

---

## 📜 License

This project is for educational purposes. Feel free to modify and build upon it. However, the code is shared for personal, non-commercial use only.

---

## 🙋‍♂️ Author

Created by **[Your Name]**.
