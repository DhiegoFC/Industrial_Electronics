# Week 03 – Activity 02: Sound Detection and LED Visualization using Microphone Sensor

## 🎯 Objective
In this activity, students will learn how to use a **microphone sound sensor** to detect and visualize sound intensity through LEDs.  
The first experiment uses a **single LED** that turns ON with a loud sound (e.g., a clap), while the second displays **multiple LEDs** representing different sound levels.

---

## 🧩 Materials
- Arduino UNO (DFRduino R3)  
- Gravity IO Expansion Shield  
- Analog Microphone Sensor (Gravity: Analog Sound Sensor)  
- Breadboard and jumper wires  
- 5 LEDs (5 mm)  
- 5 × 220 Ω resistors  

---

## 👏 Sound Detection with Single LED

### Description
The microphone module captures sound intensity and converts it into a variable voltage.  
This voltage is read by the Arduino’s **analog input A0**.  
When the sound amplitude exceeds a defined threshold, a **digital output (pin 3)** is activated, turning ON the LED.

### Circuit Diagram and Breadboard
![Microphone LED Breadboard](../lesson_images/mic_led_breadboard.jpg)  
![Microphone LED Circuit Diagram](../lesson_images/mic_led_diagram.jpg)

### Expected Behavior
- The LED remains OFF under normal conditions.  
- When a **clap** or loud sound is detected, the LED **briefly turns ON**.  
- The threshold can be adjusted in the code to make the sensor more or less sensitive.  

### Arduino Code
👉 [View Code: Microphone Clap LED](./programs/mic_clap_led/mic_clap_led.ino)

---

## 🔊 Sound Level Visualization with Multiple LEDs

### Description
In this setup, the same microphone sensor is used to drive **five LEDs** connected to pins **3, 5, 6, 9, and 10**.  
Each LED represents a different sound intensity range, allowing visualization of volume changes in real time.  
This behavior mimics a simple **audio level meter (VU meter)**.

### Circuit Diagram and Breadboard
![Microphone 5 LEDs Breadboard](../lesson_images/mic_5leds_breadboard.jpg)  
![Microphone 5 LEDs Circuit Diagram](../lesson_images/mic_5leds_diagram.jpg)

### Expected Behavior
- When you **speak softly**, only the **first LED** lights up.  
- At **medium sound levels**, **2–3 LEDs** turn ON.  
- With a **loud sound**, **4–5 LEDs** illuminate simultaneously.  
- The LEDs update continuously based on microphone input.

### Arduino Code
👉 [View Code: Microphone Sound Level LEDs](./programs/mic_sound_level_leds/mic_sound_level_leds.ino)

---

## 🧠 Learning Outcome
After completing this activity, students will:
- Understand how an **analog microphone sensor** converts sound waves into voltage signals.  
- Set and tune **threshold values** for sound-based triggering.  
- Implement a **basic sound intensity visualization** using PWM and multiple outputs.  
- Relate sound energy variations to **real-time digital responses** in control systems.

---

## 🙏 Acknowledgment
These hands-on exercises are inspired by the  
🎥 [Arduino Hero to Zero YouTube playlist by Sanjin Dedić](https://www.youtube.com/playlist?list=PL_92WMXSLe_86NTWf0nchm-EmQIwccEye),  
which serves as the foundation for practical experimentation in this laboratory module.
