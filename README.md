# 🚦 Wireless Traffic Violation Detection System

![Python](https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white)
![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Hardware](https://img.shields.io/badge/Hardware-IoT-FFB900?style=for-the-badge)

> [cite_start]An automated, IoT-driven vehicle monitoring system designed to detect traffic violations, prevent drunk driving, and provide real-time accident alerts using wireless energy transfer and GPS/GSM tracking[cite: 25, 55].

---

## 📸 Project Demo
*Tip: Replace the link below with a GIF showing your Python webcam script capturing a vehicle, or the LCD displaying an alert.*
![System Demo](https://via.placeholder.com/800x400.png?text=Add+a+GIF+of+your+working+project+here!)

---

## 🚀 Overview
[cite_start]Traffic congestion and road accidents are critical challenges, often worsened when drivers jump signals or drive under the influence[cite: 4, 6]. [cite_start]This system acts as a "Smart Black Box" for vehicles, continuously monitoring the vehicle's state and interacting with smart traffic signals via wireless coils to enforce traffic discipline automatically[cite: 25]. 

**Core Objectives:**
* [cite_start]Automate penalty logging for traffic rule breakers[cite: 25].
* [cite_start]Prevent unauthorized or impaired individuals from operating vehicles[cite: 338, 340].
* [cite_start]Reduce emergency response times during accidents[cite: 231].

---

## ✨ Key Features

* 🚫 **Signal Jump Detection (Smart Penalty):** Uses wireless electromagnetic coils. [cite_start]If a vehicle crosses a zebra crossing during a red light, the active transmitter coil on the road energizes a secondary receiving coil in the vehicle, immediately logging the violation and sending an SMS to the authorities and the owner[cite: 336].
* [cite_start]🍻 **Drunk Driving Prevention:** An MQ-3 alcohol sensor monitors the driver[cite: 188]. [cite_start]If alcohol is detected, a penalty is directly deducted from their bank account, and the system can optionally block the ignition[cite: 190, 338].
* [cite_start]💥 **Real-Time Accident Alerts:** A piezoelectric pressure sensor detects sudden impacts[cite: 225, 337]. [cite_start]Upon collision, the microcontroller triggers the GSM module to instantly send an SMS with GPS coordinates to the police, hospitals, and family members[cite: 230, 337].
* [cite_start]🔑 **License as Ignition Key:** Adds a layer of security ensuring only authorized persons can start the vehicle[cite: 339, 340].
* [cite_start]📷 **Automated Surveillance:** A Python-based webcam script captures video footage of vehicles breaking traffic rules for visual evidence[cite: 341].

---

## 🛠️ Technology & Hardware Stack

| Category | Components Used |
| :--- | :--- |
| **Microcontrollers** | [cite_start]ATmega328P (Arduino), AT89C2051 [cite: 137, 238] |
| **Communication** | [cite_start]SIM900 GSM Module, Neo-6M GPS Module [cite: 76, 108] |
| **Sensors** | [cite_start]MQ-3 (Alcohol), Piezoelectric (Impact/Shock) [cite: 181, 225] |
| **Wireless Transfer** | [cite_start]Copper Coils (Transmitter & Receiver), AC/DC Inverter, 10MHz Oscillator [cite: 781, 802] |
| **Software/Languages**| [cite_start]C (Arduino IDE), Python (Webcam logic) [cite: 55, 260] |
| **Displays & Power** | [cite_start]16x2 LCD, 7805 & 7812 Voltage Regulators [cite: 164, 466] |

---

## ⚙️ System Architecture

### 1. Traffic Signal Unit (Base Unit)
Operates at the traffic light. [cite_start]When the signal turns red, an AC/DC converter and a frequency oscillator energize a transmitting copper coil embedded in the road[cite: 821, 834].

### 2. Vehicle Unit (Portable Device Side)
Acts as the smart black box. [cite_start]It contains the receiving coil, rectifier, and voltage regulator[cite: 804, 806]. 
* [cite_start]**Rule Break Flow:** Red Signal $\rightarrow$ Transmitter Coil Active $\rightarrow$ Vehicle Crosses $\rightarrow$ Receiver Coil Energized $\rightarrow$ AT89C2051/ATmega processes data $\rightarrow$ GSM sends SMS[cite: 336, 795].

### 3. Safety & Tracking Flow
* [cite_start]**Accident:** Piezo sensor detects shock $\rightarrow$ ATmega328P reads threshold $\rightarrow$ GPS locks coordinates $\rightarrow$ GSM sends Google Maps link to authorities[cite: 229, 230].

---

## 💡 Smart City Applications
* [cite_start]**Traffic Violation Enforcement:** Automatically detects red-light jumping[cite: 920].
* [cite_start]**Evidence Collection:** Captures images/video of violations for penalty issuance[cite: 925].
* [cite_start]**Data Analytics:** Violation data can be analyzed to identify high-risk zones and peak violation times[cite: 928].
