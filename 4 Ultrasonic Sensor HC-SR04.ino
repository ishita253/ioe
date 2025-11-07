// -------------------------------------------------------
// Program: Ultrasonic Sensor (HC-SR04)
// Description: This program measures the distance to an object 
// using the HC-SR04 ultrasonic sensor and displays the distance 
// in centimeters on the Serial Monitor.
//
// Connections:
//   VCC  → 5V
//   GND  → GND
//   Trig → Pin 8
//   Echo → Pin 7
// -------------------------------------------------------

#define echoPin 7  // Echo pin
#define trigPin 8  // Trigger pin

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600); // Start serial communication
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH); // Measure echo time
  float distance = duration * 0.034 / 2;  // Convert time to distance (cm)

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500); // Wait half a second before next measurement
}
