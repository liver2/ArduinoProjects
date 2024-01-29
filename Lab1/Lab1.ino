// Oliver Szabo
void setup() {
  pinMode(13, OUTPUT); // Setting the different pins to output mode so that they will recognize digitalWrite()
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH); // Sends a 5V voltage to the pin that causes current and a potential difference, lighting up the LED
  delay(5000);                      
  digitalWrite(13, LOW); // Sends a 0V voltage to the pin, causing the LED to go out
  digitalWrite(11, HIGH);  
  delay(5000);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(12, LOW);                     
}
