// Week 02 - Activity 03
// Voltage Divider using a Potentiometer
// The potentiometer controls the LED brightness (dimmer effect).
// Three different methods are shown to calculate LED brightness.

int potPin = A0;   // Potentiometer connected to analog input A0
int ledPin = 3;    // LED connected to digital PWM pin 3

void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as output
  Serial.begin(9600);      // Initialize Serial Monitor at 9600 baud
}

void loop() {
  // Read the potentiometer value (0 to 1023)
  int potValue = analogRead(potPin);

  // --- different ways to calculate LED brightness ---   
  
  // Offset and scale (useful to observe midpoint behavior)
   int ledBrightness = (potValue - 500) / 2;   

  // Using the map() function for a specific range (from 511 to 1023)
  // int ledBrightness = map(potValue, 511, 1023, 0, 255);   
    
  // Print value on monitor
  Serial.println(ledBrightness);

  // Write the PWM value to control LED brightness
  analogWrite(ledPin, ledBrightness);
}
