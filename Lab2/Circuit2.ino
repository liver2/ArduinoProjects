void setup() {
  pinMode(13, OUTPUT);
  // pinMode(A0, INPUT); <-- not working correctly
}

void loop() {
  int potentiometerValue = analogRead(A0);
  digitalWrite(13, HIGH);
  delay(potentiometerValue);
  digitalWrite(13, LOW);
  delay(potentiometerValue);
}
