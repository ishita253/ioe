// -------------------------------------------------------
// Program: Fade LED
// Description: This program gradually increases and decreases 
// the brightness of an LED connected to pin 9 using PWM 
// (Pulse Width Modulation).
//
// Note: Use a PWM-supported pin (e.g., 3, 5, 6, 9, 10, or 11 on Arduino Uno).
// -------------------------------------------------------

void setup() {
  pinMode(9, OUTPUT);  // Set pin 9 as output
}

void loop() {
  // Increase brightness
  for (int i = 0; i <= 255; i++) {
    analogWrite(9, i);  // Write PWM value (0–255)
    delay(10);          // Wait for smooth fade
  }

  // Decrease brightness
  for (int i = 255; i >= 0; i--) {
    analogWrite(9, i);
    delay(10);
  }
}
