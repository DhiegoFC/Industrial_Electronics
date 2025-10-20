// Week 03 - Activity 01
// LM35 Temperature Sensor → LED Control

const int sensorPin = A0;    // LM35 analog output
const int ledPin    = 3;     // LED output pin
const float threshold = 22.0; // Temperature limit in °C

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  delay(1000); // wait for sensor stabilization
}

void loop() {
  int sensorValue = analogRead(sensorPin);       // read analog input (0–1023)
  float voltage = sensorValue * (5.0 / 1023.0);  // convert to voltage (0–5V)
  float temperatureC = voltage * 100;          // convert to Celsius (10 mV/°C)

  Serial.print("Temperature(°C):");
  Serial.println(temperatureC);

  // LED ON when temperature ≥ threshold
  
  if (temperatureC >= threshold) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(500); // update every 
}
