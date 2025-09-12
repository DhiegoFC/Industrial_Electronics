![Department of Engineering and Applied Sciences - Dalmine](./images/unibg_dalmine.jpg)

# University of Bergamo (UNIBG)

## Department of Engineering and Applied Sciences

### Industrial Electronics – Microcontrollers and Control Applications with Arduino

---

## 📘 About the Course
This repository contains the material for the **Industrial Electronics laboratory module on microcontrollers** offered at the Department of Engineering and Applied Sciences (Dalmine Campus).  

The module focuses on the **practical use of microcontrollers (Arduino platform)** to demonstrate how **sensors, transducers, amplifiers, and actuators** are integrated into control systems for industrial processes.  

- **Total duration:** 16 hours  
- **Format:** 3 weeks, 2 sessions per week (2h + 3h, one session may extend by 1h)  
- **Language:** English  
- **Lab resources:** 10 Arduino kits available (2 students per kit, class size usually ~20 students)  

> ⚠️ If the number of students exceeds the availability of kits, laboratory sessions may be duplicated to ensure all participants have access to the hardware.  

---

## 🎯 Learning Objectives
By the end of this course, students will be able to:
- Understand the structure and role of **microcontrollers** in industrial control systems.  
- Explore the Arduino UNO kit and interface with **digital and analog I/O**.  
- Work with **transducers and sensors** such as potentiometers, LDRs, and temperature sensors.  
- Apply **signal conditioning techniques** (resistors, voltage dividers, simple amplifiers, logic gates).  
- Implement and program **basic actuator control** (LEDs, buzzers, speakers).  
- Develop **Arduino sketches** to read sensors and drive actuators.  
- Demonstrate the principle of **closed-loop control** using microcontroller-based prototypes.  

---

## 🗓️ Course Structure

### 📘 Week 01 – Introduction to Microcontrollers & Arduino Kit
- **Slides:**  
  Microcontrollers in Control Systems:  [<img src="images/pdf_logo1.png" alt="PDF" width="23" height="23" /> Microcontrollers in Control Systems](lessons/week_01/week_01_IoT_LoRaWAN_Industrial_IoT_Dhiego.pdf)

- **Hands-on:**  
  - Exploring the Arduino UNO (DFRduino R3) and the kit components.  
  - Basic breadboard setup: LED with resistor, push button input.  

---

### 🔧 Week 02 – Circuit Fundamentals (No Programming)
- **Hands-on:**  
  - LED Button Circuit (digital switching).  
  - Potentiometer LED Control (voltage divider).  
  - Glow in the Dark Circuit with LDR.  
  - Simple Transistor Amplifier (2N3904).  
  - Logic Gate demonstration (AND/OR with push buttons).  

---

### 🌐 Week 03 – Programming & Closed-Loop Control
- **Hands-on:**  
  - LED Blink Rate and Random LED Control (timing, randomness).  
  - Push Button Input/Output Programming.  
  - Analog Input with Voltage Dividers.  
  - Light Theremin (LDR → sound with buzzer).  
  - LM35 Temperature Sensor with Arduino Plotter (sensor → conditioning → microcontroller → actuator).  

---

## 🧰 Available Hardware (Arduino Kit)
- **Board & Base:** DFRduino UNO R3, USB cable, expansion shield, breadboard with holder.  
- **Sensors:** Potentiometers, LDRs, LM35 temperature sensor, tilt switch, PIR motion sensor, microphone sensor, MPU6050 (accelerometer + gyroscope), IR receiver.  
- **Actuators:** LEDs, 8-segment LED display, buzzer, digital speaker module.  
- **Discrete Components:** Resistors (220Ω, 1kΩ, 4.7kΩ, 10kΩ), transistor 2N3904, push buttons, jumpers.  
- **Others:** MicroSD module, remote control with CR2025 battery.  

---

## 📂 Repository Structure
```plaintext
├── lessons/
│   ├── week01/
│   │   ├── README.md                # Overview of Week 01
│   │   ├── lesson_images/           # Lesson images
│   │   └── hands-on/                # Activities
│   ├── week02/
│   │   ├── README.md
│   │   ├── lesson_images/
│   │   └── hands-on/
│   ├── week03/
│   │   ├── README.md
│   │   ├── lesson_images/
│   │   └── hands-on/
├── images/                         # Photos and figures for documentation
└── README.md                       # Course overview (this file)
