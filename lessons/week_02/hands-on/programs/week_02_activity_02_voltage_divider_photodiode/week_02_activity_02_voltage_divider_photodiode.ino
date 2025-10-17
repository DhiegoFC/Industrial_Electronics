// Week 02 - Activity 04
// Voltage Divider Light Sensor (Photodiode) → LED Dimmer (Inverse Mapping)
// Photodiode + 10k resistor on A0 form a voltage divider.
// LED on pin 3 gets brighter as the environment gets darker.

const int sensorPin = A0;   // Photodiode voltage divider output
const int ledPin    = 3;    // PWM LED output
int minSensorValue = 460;   // Min value measured (dark)
int maxSensorValue = 990;   // Max value measured (bright)

void setup() {
  delay(1000);               // Wait for sensor stabilization
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);        // Serial output frequency
}

void loop() {
  int sensorValue = analogRead(sensorPin);

  // Map light intensity to PWM.
  // Use (0,255) for direct mapping → brighter light = brighter LED.
  // Use (255,0) for inverted mapping → darker = brighter LED.
  int pwmValue = map(sensorValue, minSensorValue, maxSensorValue, 0, 255);
  pwmValue = constrain(pwmValue, 0, 255);

  // Debug info
  Serial.print("Sensor: ");
  Serial.print(sensorValue);
  Serial.print("  |  PWM: ");
  Serial.println(pwmValue);

  analogWrite(ledPin, pwmValue);
  // You can change the loop delay in order to get faster sensor values
  delay(250);
}
