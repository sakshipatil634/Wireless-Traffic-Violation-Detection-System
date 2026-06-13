# 🚦 WIRELESS BASED TRAFFIC VIOLATION DETECTION

<p align="center">
  <img src="assets/banner.gif" alt="Project Banner" width="100%">
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white">
  <img src="https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white">
  <img src="https://img.shields.io/badge/GSM-SIM900-orange?style=for-the-badge">
  <img src="https://img.shields.io/badge/GPS-NEO6M-green?style=for-the-badge">
  <img src="https://img.shields.io/badge/IoT-Smart%20Traffic-blue?style=for-the-badge">
</p>

---

## 📖 Overview

The **WIRELESS BASED TRAFFIC VIOLATION DETECTION** is an IoT-based solution designed to automate traffic rule enforcement, improve road safety, and provide real-time monitoring of vehicles.

The system combines **Arduino, GSM, GPS, Alcohol Sensors, Piezoelectric Sensors, Wireless Detection Technology, and Python-based Monitoring** to identify traffic violations, detect accidents, track vehicle location, and instantly notify authorities.

---

## 🎯 Problem Statement

Traffic violations and delayed emergency response contribute significantly to road accidents and public safety concerns.

Traditional traffic monitoring systems:

- Require manual supervision
- Have delayed violation reporting
- Lack real-time vehicle tracking
- Provide limited accident response capabilities

This project aims to automate these processes using embedded systems and wireless communication technologies.

---

# ✨ Features

### 🚥 Traffic Signal Violation Detection
- Detects red-light jumping automatically
- Wireless transmitter and receiver coil mechanism
- Real-time violation logging

### 📍 Live GPS Tracking
- Tracks vehicle location continuously
- Captures coordinates during incidents
- Enables accurate violation mapping

### 📱 GSM Alert System
- Sends SMS notifications instantly
- Reports:
  - Violation type
  - Vehicle location
  - Emergency alerts

### 🍺 Drunk Driving Detection
- Uses MQ-3 Alcohol Sensor
- Detects alcohol consumption
- Generates warning and penalty notifications

### 🚑 Accident Detection
- Piezoelectric sensor detects impact
- Sends emergency messages with GPS location
- Faster response from authorities

### 📸 Evidence Collection
- Python-based webcam monitoring
- Captures images/videos of violating vehicles

### 🗄️ Centralized Data Management
- Stores violation history
- Tracks repeat offenders
- Maintains digital records

---

# 🏗️ System Architecture

```text
                      Traffic Signal
                             │
                             ▼
               Wireless Transmitter Coil
                             │
                             ▼
                 Vehicle Receiver Coil
                             │
                             ▼
                        Arduino UNO
             ┌────────────┼────────────┐
             │            │            │
             ▼            ▼            ▼
         GPS Module   GSM Module   MQ-3 Sensor
             │            │            │
             ▼            ▼            ▼
      Location Data  SMS Alerts  Alcohol Detection

                             │
                             ▼

                     Piezo Sensor
                             │
                             ▼

                   Accident Detection

                             │
                             ▼

                      Python Server
                             │
                             ▼

                   Camera Monitoring
```

---

# 🔄 Workflow

```text
Vehicle Approaches Signal
          │
          ▼
   Signal Status Check
          │
     ┌────┴────┐
     │         │
     ▼         ▼
  Green       Red
     │         │
     ▼         ▼
 Continue   Detect Crossing
                 │
                 ▼
       Violation Detected
                 │
                 ▼
       Capture GPS Location
                 │
                 ▼
         Send GSM Alert
                 │
                 ▼
        Store Violation Data
                 │
                 ▼
         Capture Evidence
```

---

# 🛠️ Hardware Components

| Component | Description |
|------------|------------|
| Arduino UNO / ATmega328P | Main Controller |
| GSM SIM900 Module | Wireless Communication |
| GPS NEO-6M Module | Vehicle Tracking |
| MQ-3 Alcohol Sensor | Alcohol Detection |
| Piezoelectric Sensor | Accident Detection |
| Wireless Copper Coils | Signal Violation Detection |
| LCD Display | Status Monitoring |
| Buzzer | Alert Generation |
| Webcam | Evidence Capture |

---

# 💻 Software Stack

| Technology | Purpose |
|------------|---------|
| Arduino IDE | Embedded Programming |
| Embedded C | Controller Logic |
| Python | Monitoring & Video Capture |
| GSM AT Commands | Communication |
| GPS Parsing | Location Tracking |

---

# 📂 Project Structure

```bash
Wireless-Traffic-Violation-Detection/
│
├── Arduino_Code/
│   ├── main.ino
│
├── Python_Monitoring/
│   ├── camera_capture.py
│   
├── Hardware/
│   ├── circuit_diagram.png
│   ├── block_diagram.png
│   └── hardware_setup.jpg
│
├── Paper/ 
│   ├── publication_paper.pdf
│
├── Documentation/
│   └── Project_Report.pdf
|   ├── Project_PPT.ppt
│
└── README.md
```
---

# 📊 Sample Output

### Traffic Violation Alert

```text
--------------------------------
TRAFFIC VIOLATION DETECTED
--------------------------------

Vehicle ID : MH12AB1234
Violation  : Red Signal Jump
Location   : 17.12345, 74.56789
Time       : 10:45 AM

Penalty Generated Successfully
```

---

### Accident Alert

```text
--------------------------------
EMERGENCY ALERT
--------------------------------

Vehicle ID : MH12AB1234
Violation  : Accident Hit
Location   : 17.12345, 74.56789
Time       : 10:45 AM

Emergency Services Notified
```


# 📈 Future Enhancements

- AI-Based Number Plate Recognition (ANPR)
- Helmet Detection
- Seatbelt Detection
- Cloud-Based Monitoring Dashboard
- Mobile Application Integration
- Smart City Infrastructure Integration
- Real-Time Analytics Dashboard

---

# 🎓 Learning Outcomes

- Embedded Systems Design
- IoT Development
- GPS-GSM Integration
- Sensor Interfacing
- Real-Time Monitoring
- Wireless Communication
- Python Automation
- Smart Transportation Systems

---

# 💼 Interview Highlights

### Challenges Solved

✔ Automated traffic violation detection

✔ Real-time GPS tracking

✔ Accident notification system

✔ Drunk driving detection

✔ Wireless signal violation monitoring

✔ Evidence collection using computer vision

---

# 👨‍💻 Author

**Sakshi Patil And TEAM**

Electronics & Telecommunication Engineering


---

## ⭐ If you found this project useful, please give it a star!

```
⭐ Star this repository to support the project.
```
