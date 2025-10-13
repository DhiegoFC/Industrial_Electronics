# Voltage Divider and Analog Input (PWM Dimmer with Arduino UNO)

## 🎯 Objective

In this session, students will explore how a **voltage divider** can generate an **analog input** for the Arduino (`analogRead()`) and how this signal can be used to control an **LED brightness** through **PWM output** (`analogWrite()`).  

Both activities use a **voltage divider** as the fundamental principle — one with a **potentiometer**, and the other with an **LDR (or photodiode)** and a **10 kΩ resistor** — to vary the voltage applied to the analog input pin.

Two experiments are proposed:

1. **Potentiometer** as a voltage divider → LED brightness follows the knob position.  
2. **LDR/photodiode with a 10 kΩ resistor** as a voltage divider → LED brightness changes with ambient light.  

> Note: The focus is on **voltage division, analog input reading, and PWM control**. Code and descriptions are written entirely **in English**.

---

## ⚙️ Prerequisites

- **Arduino IDE** installed: [https://www.arduino.cc/en/software](https://www.arduino.cc/en/software)  
- **Arduino UNO (DFRduino R3)** connected via USB  
- In the Arduino IDE, select:  
  - **Tools → Board → Arduino UNO**  
  - **Tools → Port → (your COM port)**  
- Use **Verify (✓)** to compile and **Upload (→)** to program the board.  

---

## 🛠️ What You’ll Need (both activities)

- Arduino UNO (DFRduino R3)  
- Breadboard  
- LED (5 mm)  
- **220 Ω resistor** (for LED current limiting)  
- **10 kΩ potentiometer** (for Activity 1)  
- **1 fixed 10 kΩ resistor** (used in both activities as part of the voltage divider)  
- **LDR (or photodiode)** (for Activity 2)  
- Jumper wires (male-to-male)  
- USB A–B cable  

---

## ⚙️ Activity 1 – Potentiometer (Voltage Divider) → LED Dimmer (PWM)

### 📘 Description

The **10 kΩ potentiometer** is wired as a **voltage divider** between 5 V and GND.  
Its middle pin (wiper) provides a **variable voltage** that is read on the analog pin **A0**.  
The Arduino then converts this voltage to a **PWM output** to control the LED brightness on a digital pin.  
The LED acts as a **dimmer**, gradually changing intensity as the potentiometer is rotated.

---

### 🖼️ Breadboard Layout

<p align="center">
  <img src="../../lesson_images/week02_activity03_pot_breadboard.png" alt="Potentiometer Analog Input Breadboard" width="70%">
</p>

### ⚙️ Circuit Diagram

<p align="center">
  <img src="../../lesson_images/week02_activity03_pot_diagram.png" alt="Potentiometer Analog Input Diagram" width="70%">
</p>

---

### 💻 Arduino Sketch

👉 **Open:** [week_02_activity_03_pot.ino](./programs/week_02_activity_03_pot.ino)

**What the code does:**
- Reads the potentiometer voltage using `analogRead(A0)` (range 0–1023).  
- Scales this value to match the PWM output range (0–255).  
- Writes the scaled value to the LED pin using `analogWrite(ledPin, value)`.  

---

### 🔍 Expected Behavior

- Rotating the potentiometer changes the **voltage on A0**, and the LED brightness varies **smoothly**.  
- When the potentiometer is at one end, the LED is **off**; at the opposite end, it is **fully on**.  
- The student observes how the **voltage divider** produces a proportional voltage that drives the **PWM output**.

---

## ⚙️ Activity 2 – LDR (Voltage Divider) → Light-Responsive LED Dimmer

### 📘 Description

In this activity, the potentiometer is replaced by an **LDR (or photodiode)** and a **10 kΩ resistor**, forming another **voltage divider**.  
As light intensity changes, the resistance of the LDR varies, producing a corresponding voltage that the Arduino reads on **A0**.  
The code converts this analog value into a PWM signal to control the LED brightness.  
Depending on the wiring or software logic, the LED can be **brighter in the dark** or **brighter in the light**.

> 💡 Tip: Swapping the LDR and fixed resistor positions in the divider or inverting the logic in the code reverses the LED behavior.

---

### 🖼️ Breadboard Layout

<p align="center">
  <img src="../../lesson_images/week02_activity04_ldr_breadboard.png" alt="LDR LED Breadboard" width="70%">
</p>

### ⚙️ Circuit Diagram

<p align="center">
  <img src="../../lesson_images/week02_activity04_ldr_diagram.png" alt="LDR LED Circuit Diagram" width="70%">
</p>

---

### 💻 Arduino Sketch

👉 **Open:** [week_02_activity_04_ldr.ino](./programs/week_02_activity_04_ldr.ino)

**What the code does:**
- Reads the analog input from `A0` (LDR voltage).  
- Converts the value to a PWM duty cycle for LED brightness.  
- Optionally inverts the result if you want **the LED to brighten in the dark**:

```cpp
int sensorValue = analogRead(A0);
int pwmValue = 255 - (sensorValue / 4); // Invert behavior if needed
analogWrite(ledPin, pwmValue);
```

### 🔍 Expected Behavior

- When the light on the LDR changes, the LED brightness changes continuously.
- Covering the LDR with your hand makes the LED brighter (if logic is inverted).
- Shining light on it reduces brightness.

---

## 🧠 Learning Outcome

After completing these activities, students will:

- Understand and build voltage divider circuits (potentiometer and LDR + resistor).  
- Observe how analog voltage levels are converted into PWM output brightness.  
- Use analogRead() and analogWrite() to connect sensors and actuators.  
- Explore how changes in light or voltage produce a smooth analog-to-digital control.

---

## 🙏 Acknowledgment

These hands-on exercises are inspired by the  
🎥 [*Arduino Hero to Zero* YouTube playlist by Sanjin Dedić](https://www.youtube.com/playlist?list=PL_92WMXSLe_86NTWf0nchm-EmQIwccEye),  
which serves as the foundation for practical experimentation in this laboratory module.



