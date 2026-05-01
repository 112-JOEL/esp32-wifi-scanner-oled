# ESP32 WiFi Scanner with OLED 📡

A simple ESP32-based WiFi network scanner that displays nearby networks on an OLED screen.

## 🔧 Features
- Scan nearby WiFi networks
- Display SSID names
- Show signal strength (RSSI)
- Real-time updates on OLED display

## 🛠️ Hardware Used
- ESP32
- SSD1306 OLED Display (I2C)

## 🔌 Connections
| OLED | ESP32 |
|------|------|
| VCC  | 3.3V |
| GND  | GND  |
| SDA  | GPIO 21 |
| SCL  | GPIO 22 |

## 📷 Project Images
(Add your images here)

## ▶️ How to Run
1. Install Arduino IDE
2. Install ESP32 board package
3. Install:
   - Adafruit SSD1306
   - Adafruit GFX
4. Upload code to ESP32

## 🚀 Future Improvements
- Add signal bars UI
- Add scrolling text
- Add channel + encryption info

---
Made with ESP32 ❤️
