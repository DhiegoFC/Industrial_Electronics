# Week 03 – Temperature Measurement and Closed-Loop Control using LM35 Sensor

## 🎯 Objective
In this activity, students will explore how the **LM35 temperature sensor** measures temperature and how it can be integrated into a **closed-loop control system**.  
The first experiment will visualize temperature readings in the Arduino Serial Plotter, while the second will activate a **speaker** when a temperature threshold is reached.

---

## 🧩 Materials
- Arduino UNO (DFRduino R3)  
- Breadboard and jumper wires  
- LM35 temperature sensor  
- 10 kΩ resistor (optional, for stability)  
- Speaker or buzzer module  
- Gravity IO Expansion Shield (for second part)

---

## 🌡️ Temperature Reading and Serial Plotting

### Description
The LM35 outputs a voltage proportional to the temperature (10 mV per °C).  
This voltage is read by the Arduino’s analog input (A0), converted into Celsius, and displayed in the **Serial Plotter** for real-time visualization.

### Circuit Diagram and Breadboard
![LM35 Breadboard Setup](../lesson_images/lm35_breadboard.jpg)  
![LM35 Circuit Diagram](../lesson_images/lm35_diagram.jpg)

### Expected Behavior
- The Serial Plotter displays a live temperature curve.  
- Touching the LM35 increases the temperature reading; releasing it returns it to room temperature.  

### Arduino Code
👉 [View Code: LM35 Temperature Reading](./programs/lm35_temperature_reading/lm35_temperature_reading.ino)

---

## 🔁 Closed-Loop Temperature Control with Speaker

### Description
Using the same LM35 circuit, a **speaker** is connected to digital pin 3 through the shield.  
When the temperature exceeds a set threshold (e.g., 30°C), the speaker emits a tone.  
This demonstrates a simple **feedback control system**: sensor → microcontroller → actuator.

### Circuit Diagram and Breadboard
![LM35 Speaker Breadboard](../lesson_images/lm35_speaker_breadboard.jpg)  
![LM35 Speaker Circuit Diagram](../lesson_images/lm35_speaker_diagram.jpg)

### Expected Behavior
- The speaker turns ON when the measured temperature **exceeds 30°C**.  
- The tone stops once the temperature **drops below 30°C**.  
- Students can adjust the threshold value in the program.

### Arduino Code
👉 [View Code: LM35 Temperature Control with Speaker](./programs/lm35_speaker_control/lm35_speaker_control.ino)

---

## 🧠 Learning Outcome
After completing this activity, students will:
- Understand how the **LM35 converts temperature into voltage**.  
- Visualize real-time data using the **Arduino Serial Plotter**.  
- Implement a **basic closed-loop control system**.  
- Explore threshold-based decision-making in microcontroller applications.

---

## 🙏 Acknowledgment
These hands-on exercises are inspired by the  
🎥 [Arduino Hero to Zero YouTube playlist by Sanjin Dedić](https://www.youtube.com/playlist?list=PL_92WMXSLe_86NTWf0nchm-EmQIwccEye),  
which serves as the foundation for practical experimentation in this laboratory module.

