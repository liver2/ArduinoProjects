// Oliver Szabo

int b1 = 2;
int b2 = 3;
int light = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(b1, INPUT); // Setting appropriate pin modes
  pinMode(b2, INPUT);
  pinMode(light, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  int i = 0; // simulates an XOR gate (directions unclear)
  if (digitalRead(b1) == HIGH) {
    i++;
  }
  if (digitalRead(b2) == HIGH) {
    i++;
  }
  if (i == 1) {
    digitalWrite(light, HIGH);
  } else {
    digitalWrite(light, LOW);
  }
}
