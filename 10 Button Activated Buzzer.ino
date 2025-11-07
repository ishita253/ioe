// -------------------------------------------------------
// Program: Button-Activated Buzzer
// Description: This program turns ON a buzzer connected to pin 8 
// whenever a button connected to pin 2 is pressed. 
// When the button is released, the buzzer turns OFF.
// -------------------------------------------------------

int buttonPin = 2;   // Pin where the button is connected
int buzzerPin = 8;   // Pin where the buzzer is connected

void setup() {
  pinMode(buttonPin, INPUT);   // Set button pin as input
  pinMode(buzzerPin, OUTPUT);  // Set buzzer pin as output
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    digitalWrite(buzzerPin, HIGH);  // Turn buzzer ON
  } else {
    digitalWrite(buzzerPin, LOW);   // Turn buzzer OFF
  }
}
