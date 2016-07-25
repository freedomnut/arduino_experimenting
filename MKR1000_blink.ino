const int LEDpin = 6;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(LEDpin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LEDpin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                  // wait for a second
  digitalWrite(LEDpin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                  // wait for a second
}
