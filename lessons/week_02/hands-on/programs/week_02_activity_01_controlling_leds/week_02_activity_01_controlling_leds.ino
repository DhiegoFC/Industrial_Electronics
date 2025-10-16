// Week 02 - Activity 01 - Exercise 01
// Sequential LED Control using digital outputs
// LEDs on pins 6, 8, 10, and 12 turn ON one by one, then all turn OFF.

int led1 = 6;   // LED 1 connected to pin 6
int led2 = 8;   // LED 2 connected to pin 8
int led3 = 10;  // LED 3 connected to pin 10
int led4 = 12;  // LED 4 connected to pin 12

void setup() {
  // Set all LED pins as OUTPUT
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  // Turn LEDs ON one by one
  digitalWrite(led1, HIGH);
  delay(1000);  // wait 1 second
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led3, HIGH);
  delay(1000);
  digitalWrite(led4, HIGH);
  //delay(1000);

  // Turn all LEDs OFF
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);

  // Wait before repeating
  delay(1000);
}
