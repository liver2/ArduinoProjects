void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600); // Set up serial monitor
  // pinMode(A0, INPUT); <-- not working correctly
}

void loop() {
  int potentiometerValue = analogRead(A0); // The analog pin reads a value from the potentiometer's voltage output
  Serial.print(potentiometerValue);
  digitalWrite(13, HIGH); // LED lights up
  delay(potentiometerValue); // Delays according to the degree of voltage
  digitalWrite(13, LOW);
  delay(potentiometerValue);
}
