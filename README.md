# 🚦 Wireless Traffic Violation Detection System

![Python](https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white)
![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Hardware](https://img.shields.io/badge/Hardware-IoT-FFB900?style=for-the-badge)

> An automated, IoT-driven vehicle monitoring system designed to detect traffic violations, prevent drunk driving, and provide real-time accident alerts using wireless energy transfer and GPS/GSM tracking.

---

## 📸 Project Demo
*Tip: Replace the link below with a GIF showing your Python webcam script capturing a vehicle, or the LCD displaying an alert.*
![System Demo](https://via.placeholder.com/800x400.png?text=Add+a+GIF+of+your+working+project+here!)

---

## 🚀 Overview
Traffic congestion and road accidents are critical challenges in growing cities. This system bridges hardware sensors and software logic to create a "Smart Black Box" for vehicles. It continuously monitors the vehicle's state and interacts with smart traffic signals via wireless coils to enforce traffic discipline automatically.

**Core Objectives:**
* Automate penalty logging for traffic rule breakers.
* Prevent unauthorized or impaired individuals from operating vehicles.
* Reduce emergency response times during accidents.

---

## ✨ Key Features

* 🚫 **Signal Jump Detection:** Uses wireless electromagnetic coils embedded in zebra crossings. If a vehicle crosses during a red light, the secondary coil in the vehicle activates, logging the violation.
* 🍻 **Drunk Driving Prevention:** An MQ-3 alcohol sensor monitors the driver's cabin. If alcohol is detected above the threshold, the system cuts the ignition and automatically deducts a penalty.
* 💥 **Real-Time Accident Alerts:** A piezoelectric sensor detects sudden impacts. Upon collision, the ATmega328P microcontroller triggers the GPS/GSM modules to instantly share the live location with emergency services and family.
* 📷 **Automated Surveillance:** A Python-based webcam script captures video footage of vehicles breaking traffic rules for visual evidence.

---

## 🛠️ Technology & Hardware Stack

| Category | Components Used |
| :--- | :--- |
| **Microcontrollers** | ATmega328P (Arduino), AT89C2051 |
| **Communication** | SIM900 GSM Module, Neo-6M GPS Module |
| **Sensors** | MQ-3 (Alcohol), Piezoelectric (Impact/Shock) |
| **Wireless Transfer** | Custom Copper Coils (Transmitter & Receiver), AC/DC Inverter |
| **Software/Languages**| C/C++ (Arduino IDE), Python (Webcam logic) |
| **Displays & Alerts** | 16x2 LCD, Active Buzzer |

---

## ⚙️ System Architecture

### 1. Traffic Signal Unit (Transmitter)
Operates at the traffic light. When the signal turns red, an AC/DC converter and a 10MHz frequency oscillator energize a transmitting copper coil (Tesla coil principle) embedded in the road.

### 2. Vehicle Unit (Receiver)
Acts as the smart black box. It contains the receiving coil, rectifier, and voltage regulator. 
* **Rule Break Flow:** Red Signal $\rightarrow$ Transmitter Coil Active $\rightarrow$ Vehicle Crosses $\rightarrow$ Receiver Coil Energized $\rightarrow$ Microcontroller logs violation $\rightarrow$ GSM sends SMS.

### 3. Safety & Tracking Flow
* **Accident:** Piezo sensor detects shock $\rightarrow$ GPS locks coordinates $\rightarrow$ GSM sends Google Maps link to authorities.

---

## 💻 Code Structure

* `/arduino_code`: Contains the C++ sketches for the ATmega328P handling sensor inputs, LCD display, and AT commands for the GSM/GPS modules.
* `/python_scripts`: Contains the Python scripts utilizing OpenCV for capturing webcam footage when a violation is flagged.
* `/circuit_diagrams`: Schematics for the power supply unit, wireless transmission coils, and main microcontroller wiring.

---

## 📈 Future Scope
* Integration with Cloud infrastructure (AWS/Azure) for centralized data logging and analytics.
* Upgrading the Python webcam script to include AI-driven License Plate Recognition (ANPR).
* Containerizing the backend reporting services using Docker for easier deployment in smart city control centers.

---
*Developed as an academic project for automated traffic enforcement and IT infrastructure monitoring.*
