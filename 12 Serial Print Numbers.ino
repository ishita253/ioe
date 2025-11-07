// -------------------------------------------------------
// Program: Serial Print Numbers
// Description: This program prints an increasing sequence of 
// numbers (starting from 0) to the Serial Monitor every second.
// -------------------------------------------------------

int count = 0; // Variable to hold the number to be printed

void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud rate
}

void loop() {
  Serial.println(count); // Print the current count to the Serial Monitor
  count++;               // Increment the count
  delay(1000);           // Wait for 1 second
}
