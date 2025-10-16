// Week 02 - Activity 04
// Voltage Divider Light Sensor (Photodiode) → LED Dimmer (baseline difference)
// Reads A0 (photodiode + 10k resistor divider), stores a baseline after 1s,
// then drives LED on pin 3 with the absolute difference from that baseline.

const int sensorPin = A0;  // Photodiode divider output
const int ledPin    = 3;   // LED on PWM pin 3

int baseline = 0;          // Will store the initial (default) reading

void setup() {
  delay(1000);
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  baseline = analogRead(sensorPin);
  Serial.print("Baseline captured: ");
  Serial.println(baseline);
}

void loop() {
  // Read current sensor value (0..1023)
  int sensorValue = analogRead(sensorPin);

  // Print raw sensor value to Serial Monitor
  Serial.print("Sensor: ");
  Serial.println(sensorValue);

  // Compute absolute difference from the baseline
  int pwmValue = abs(sensorValue - baseline);

  // Drive LED brightness with the difference
  analogWrite(ledPin, pwmValue);

  // Small pause to make the Serial output easier to read
  delay(15);
}


