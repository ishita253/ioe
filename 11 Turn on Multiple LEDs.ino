// -------------------------------------------------------
// Program: Turn ON Multiple LEDs
// Description: This program turns ON two LEDs connected to 
// pin 12 and pin 13 permanently. It’s useful for testing 
// multiple LED connections at once.
// -------------------------------------------------------

void setup() {
  pinMode(12, OUTPUT);   // Set pin 12 as output
  pinMode(13, OUTPUT);   // Set pin 13 as output

  digitalWrite(12, HIGH); // Turn ON LED on pin 12
  digitalWrite(13, HIGH); // Turn ON LED on pin 13
}

void loop() {
  // Nothing to do here
}
