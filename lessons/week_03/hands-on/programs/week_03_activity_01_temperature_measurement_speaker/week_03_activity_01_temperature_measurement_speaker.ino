/*
  Week 03 – Activity 1 (Part 2)
  🔊 LM35 threshold alert -> PWM on D3

  - LM35 on A0 (10 mV/°C)
  - Speaker/Buzzer on D3 (PWM)
  - Starts alert at threshold; higher temp = faster beeps + louder PWM
*/

const int   sensorPin     = A0;     // LM35
const int   speakerPin    = 3;      // PWM pin (D3 on UNO)
const float TEMP_THRESHOLD = 22.0;  // °C

// Beep period range (ms): at threshold it's slower; gets faster as temp rises
const int MAX_PERIOD_MS = 400;  // slower (just at threshold)
const int MIN_PERIOD_MS = 100;  // faster (hotter)

void setup() {
  pinMode(speakerPin, OUTPUT);
  Serial.begin(9600);
  delay(500);
}

void loop() {
  // Read LM35
  int   sensorValue = analogRead(sensorPin);        // 0..1023
  float voltage     = sensorValue * (5.0 / 1023.0); // V
  float tempC       = voltage * 100.0;              // °C (LM35: 10 mV/°C)

  // Debug (optional)
  Serial.print("TempC:"); 
  Serial.print(tempC);
  Serial.print("  sensorValue: "); 
  Serial.println(sensorValue);

  if (tempC >= TEMP_THRESHOLD) {
    // Period gets shorter as temperature increases
    int tempInt  = (int)tempC;
    int periodMs = map(tempInt, (int)TEMP_THRESHOLD, (int)TEMP_THRESHOLD + 20, 
                       MAX_PERIOD_MS, MIN_PERIOD_MS);
    periodMs = constrain(periodMs, MIN_PERIOD_MS, MAX_PERIOD_MS);

    // Louder with higher sensorValue (PWM duty)
    int duty = map(sensorValue, 0, 1023, 0, 255);

    // One alert cycle: ON then OFF (speaker goes to zero between cycles)
    analogWrite(speakerPin, duty);
    delay(periodMs);
    analogWrite(speakerPin, 0);
    delay(periodMs);
  } else {
    // Below threshold: silent, fixed timing
    analogWrite(speakerPin, 0);
    delay(500);
  }
}

