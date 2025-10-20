/*
  Sound Level Indicator with LEDs (fixed)
  🎤 Mic: A0
  💡 LEDs: 2, 3, 5, 7, 9   (avoid pin 1 because it's Serial TX)
  Thresholds: 100, 250, 350, 450, 550
*/

const int micPin = A0;  // Microphone input

const int led1 = 2;     
const int led2 = 3;
const int led3 = 5;
const int led4 = 7;
const int led5 = 9;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);

  Serial.begin(9600);
  delay(500);
}

void loop() {
  int sensorValue = analogRead(micPin);  // 0..1023

  Serial.print("Microphone value:");
  Serial.println(sensorValue);

  // Progressive LED bar
  digitalWrite(led1, sensorValue > 100 ? HIGH : LOW);
  digitalWrite(led2, sensorValue > 250 ? HIGH : LOW);
  digitalWrite(led3, sensorValue > 350 ? HIGH : LOW);
  digitalWrite(led4, sensorValue > 450 ? HIGH : LOW);
  digitalWrite(led5, sensorValue > 550 ? HIGH : LOW);

  delay(100);
}
