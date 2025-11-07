// -------------------------------------------------------
// Program: Temperature Sensor (LM35)
// Description: This program reads the temperature from an 
// LM35 sensor connected to analog pin A0 and displays the 
// temperature in °C on the Serial Monitor.
// -------------------------------------------------------

int tempPin = A0; // Pin where the LM35 sensor is connected

void setup() {
  Serial.begin(9600); // Start serial communication
}

void loop() {
  int reading = analogRead(tempPin); // Read the analog value
  float voltage = reading * (5.0 / 1023.0); // Convert to voltage
  float temperature = voltage * 100; // Convert to temperature (°C)
  
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
  
  delay(1000); // Wait 1 second before next reading
}
