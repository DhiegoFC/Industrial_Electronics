// Week 03 - Activity 02
// Microphone Sound Detection with Single LED
// The LED turns ON when the microphone detects a loud sound (above threshold).

const int micPin = A0;     // Microphone connected to analog input A0
const int ledPin = 3;      // LED connected to digital pin 3
const int threshold = 100; // Sound threshold (can be adjusted)

void setup() {
  pinMode(ledPin, OUTPUT); // Set LED pin as output
  Serial.begin(9600);      // Initialize Serial Monitor for observation
}

void loop() {
  int micValue = analogRead(micPin); // Read the microphone signal (0–1023)
  Serial.print("Microphone value: ");
  Serial.println(micValue);

  if (micValue > threshold) {
    digitalWrite(ledPin, HIGH);  // Turn LED ON
    delay(500);                  // Keep it ON for 0.5 second
    digitalWrite(ledPin, LOW);   // Turn LED OFF
  }

  delay(100); // Wait before the next reading
}
