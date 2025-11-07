// -------------------------------------------------------
// Program: Serial Print "Hello"
// Description: This simple program prints the word "Hello" 
// to the Serial Monitor every second.
// -------------------------------------------------------

void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud rate
}

void loop() {
  Serial.println("Hello"); // Print "Hello" to the Serial Monitor
  delay(1000);             // Wait for 1 second
}
