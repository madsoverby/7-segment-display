# ESP32 7-Segment Display Controller

A 7-segment display controller implemented on an ESP32 development board.

This project demonstrates direct GPIO-driven segment control without external driver ICs.  
It is designed specifically for ESP32 hardware.

---

## 🔍 Technical Overview

The system controls 7 LEDs each segment is individual driving via ESP32 GPIO pins.

A push button is connected for user interaction (e.g., incrementing displayed values).

---

## 🧰 Hardware Requirements

- ESP32 development board
- 7 LEDs
- 220–330Ω current-limiting resistors
- Push button
- Breadboard and jumper wires

---

## 🔌 GPIO Mapping

| Segment | GPIO |
|---------|------|
| A | 12 |
| B | 14 |
| C | 32 |
| D | 33 |
| E | 25 |
| F | 26 |
| G | 27 |
| Button | 0 |
| DS18B20 | 4|
⚠️ This configuration is designed for ESP32.  
Using another board requires updating the pin configuration in the source code.

---

## ⚙️ Environment Setup

1. Install Arduino IDE
2. Add ESP32 board support:
   - File → Preferences
   - Add:
     https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
3. Install **ESP32 by Espressif Systems**
4. Select your ESP32 board under Tools → Board
5. To use the DS18B20 temperature sensor, you must install the OneWire and DallasTemperature libraries.

---

## 🚀 Build & Upload

1. Open the `.ino` file
2. Select correct board and serial port
3. Upload to ESP32