// -------------------------------------------------------
// Program: Button Controlled LED
// Description: This program turns an LED on when a button 
// connected to pin 2 is pressed, and turns it off when released.
// LED is connected to pin 13.
// -------------------------------------------------------

int buttonState = 0; // Variable to store the button state

void setup() {
  pinMode(13, OUTPUT);  // Set pin 13 as output for LED
  pinMode(2, INPUT);    // Set pin 2 as input for button
}

void loop() {
  buttonState = digitalRead(2); // Read the state of the button

  if (buttonState == HIGH) {
    digitalWrite(13, HIGH); // Turn LED on
  } else {
    digitalWrite(13, LOW);  // Turn LED off
  }
}
