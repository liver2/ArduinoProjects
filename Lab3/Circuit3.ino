// Oliver Szabo
int r = 9;
int g = 10;
int b = 11;

void setup() {
  pinMode(r, OUTPUT); // Set digital pins to output
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);  
}

void loop() {
  digitalWrite(r, HIGH); // Light up red LED
  delay(1000);
  digitalWrite(r, LOW);
  delay(1000);

  digitalWrite(g, HIGH); // Green
  delay(1000);
  digitalWrite(g, LOW);
  delay(1000);

  digitalWrite(b, HIGH); // Blue
  delay(1000);
  digitalWrite(b, LOW);
  delay(1000);

  digitalWrite(r, HIGH); // All
  digitalWrite(g, HIGH);
  digitalWrite(b, HIGH);
  delay(1000);
  digitalWrite(r, LOW);
  digitalWrite(g, LOW);
  digitalWrite(b, LOW);
  delay(1000);
}
