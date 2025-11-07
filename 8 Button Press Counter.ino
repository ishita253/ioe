// -------------------------------------------------------
// Program: Button Press Counter
// Description: This program counts how many times a button 
// connected to pin 2 is pressed and displays the count 
// on the Serial Monitor.
//
// Each button press increments the counter by 1.
// -------------------------------------------------------

int buttonPin = 2;  // Pin where button is connected
int count = 0;      // Variable to store press count

void setup() {
  pinMode(buttonPin, INPUT);  // Set button pin as input
  Serial.begin(9600);         // Start serial communication
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {  // Check if button is pressed
    count++;                             // Increment count
    Serial.println(count);               // Print count to Serial Monitor
    delay(500);                          // Debounce delay to avoid multiple counts
  }
}
