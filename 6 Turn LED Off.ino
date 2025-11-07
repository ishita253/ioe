// -------------------------------------------------------
// Program: Turn LED OFF
// Description: This program keeps the LED connected to pin 13 
// permanently turned OFF. It can be used to verify wiring or 
// reset LED state.
// -------------------------------------------------------

void setup() {
  pinMode(13, OUTPUT);   // Set pin 13 as output
  digitalWrite(13, LOW); // Turn LED off
}

void loop() {
  // Nothing to do here
}
