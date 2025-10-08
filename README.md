![Department of Engineering and Applied Sciences - Dalmine](./images/unibg_dalmine.jpg)

# University of Bergamo (UNIBG)

## Department of Engineering and Applied Sciences

### Industrial Electronics – Microcontrollers and Control Applications with Arduino

---

## 📘 About the Course
This repository contains the material for the **Industrial Electronics laboratory module on microcontrollers** offered at the Department of Engineering and Applied Sciences (Dalmine Campus).  

The module focuses on the **practical use of microcontrollers (Arduino platform)** to demonstrate how **sensors, transducers, amplifiers, and actuators** are integrated into control systems for industrial processes.  

Due to high enrollment (over 60 students), the class will be divided into **three laboratory groups**, each attending **2 hours per week** for **three consecutive weeks**.  
All sessions are **fully practical** and will take place in the **Electronics Laboratory**.  

- **Total duration:** 18 hours (distributed across all groups)  
- **Format:** 3 weeks, 2-hour sessions per group per week  
- **Language:** English/Italian  
- **Lab resources:** 10 Arduino kits available (2 students per kit, rotation between groups)  

---

## 🎯 Learning Objectives
By the end of this course, students will be able to:
- Understand the structure and role of **microcontrollers** in industrial and embedded control systems.  
- Explore the **Arduino UNO** kit and identify its electronic components and interfaces.  
- Build and analyze **basic electronic circuits** on a breadboard using LEDs, resistors, transistors, and sensors.  
- Apply **signal conditioning** and understand the interaction between analog and digital inputs.  
- Use the **Arduino IDE** to program digital and analog I/O (inputs, outputs, PWM, ADC).  
- Interface **sensors and actuators** (LDR, potentiometer, LM35, microphone, buzzer) in simple control applications.  
- Demonstrate the concept of **feedback and closed-loop control** through small hands-on experiments.  

---

## 🗓️ Course Structure

### 📘 Week 01 – Introduction & Basic Circuits (No Programming)
**Objective:** Familiarization with the Arduino kit and understanding of basic components through breadboard experiments.  

- **Slides:** [<img src="images/pdf_logo1.png" alt="PDF" width="23" height="23" /> Microcontrollers in Control Systems](lessons/week_01/week_01_Microcontrollori_Elettronica_Industriale_Dhiego.pdf)

- **Hands-on:**  
  - Presentation of the Arduino Zero to Hero Kit and components overview.  
  - Breadboard assembly and testing procedures.  
  - LED brightness control using a **potentiometer** (voltage divider).  
  - “Glow in the Dark” circuit using **potentiometer + transistor (2N3904) + LDR**.  

---

### 🔧 Week 02 – Digital I/O & Signal Conditioning
**Objective:** Introduction to Arduino IDE, digital and analog interfacing, and time-based control.  

- **Hands-on:**  
  - Programming **LEDs and push buttons** for digital input/output.  
  - Controlling LED blinking and timing (delay adjustments).  
  - Reading analog input using **voltage divider** circuits (potentiometer or diode).  
  - Exploring signal response and conditioning between sensor input and LED output.  

---

### 🌐 Week 03 – Advanced Applications & Closed-Loop Concepts
**Objective:** Integration of sensors, actuators, and microcontroller programming in interactive applications.  

- **Hands-on (to be selected and adapted):**  
  - **Arduino Light Theremin** (LDR → buzzer sound).  
  - **LM35 Temperature Sensor** with graph plotting in Arduino IDE.  
  - **RGB LED Projects**: Maxwell Color Wheel and RGB Mixer with 3 potentiometers.  
  - **Microphone Applications**: Clap Switch, Double Clap Switch, or Music Reactive Circuit.  
  - Group experimentation and final demonstration.  

---

## 🧰 Available Hardware (Arduino Kit)
- **Board & Base:** DFRduino UNO R3, USB cable, expansion shield, breadboard with holder.  
- **Sensors:** Potentiometers, LDRs, LM35 temperature sensor, tilt switch, PIR motion sensor, microphone sensor, MPU6050 (accelerometer + gyroscope), IR receiver.  
- **Actuators:** LEDs, 8-segment LED display, buzzer, digital speaker module, RGB LED.  
- **Discrete Components:** Resistors (220Ω, 1kΩ, 4.7kΩ, 10kΩ), transistor 2N3904, push buttons, jumpers.  
- **Others:** MicroSD module, remote control with CR2025 battery.  

---

## 📂 Repository Structure
```plaintext
├── lessons/
│   ├── week01/
│   │   ├── README.md                # Overview of Week 01
│   │   ├── lesson_images/           # Lesson images
│   │   └── hands-on/                # Activities and Arduino sketches
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
