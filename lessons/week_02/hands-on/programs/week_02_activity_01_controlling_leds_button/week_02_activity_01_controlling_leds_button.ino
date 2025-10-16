// Week 02 - Activity 01 - Exercise 02
// Sequential LED Control activated by a push button
// LEDs on pins 6, 8, 10, and 12 light up in sequence only when the button is pressed.

int led1 = 6;    // LED 1 connected to pin 6
int led2 = 8;    // LED 2 connected to pin 8
int led3 = 10;   // LED 3 connected to pin 10
int led4 = 12;   // LED 4 connected to pin 12
int button = 3;  // Push button connected to pin 3

void setup() {
  // Set LED pins as OUTPUT
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

  // Set button pin as INPUT
  pinMode(button, INPUT);
}

void loop() {
  // Read button state (HIGH when pressed)
  int buttonState = digitalRead(button);

  if (buttonState == HIGH) {
    // Turn LEDs ON in sequence
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
  }
  else {
    // If button not pressed, keep all LEDs OFF
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }
}

