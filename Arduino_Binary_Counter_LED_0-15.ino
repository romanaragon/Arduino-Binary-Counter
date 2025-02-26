void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  delay(5000);
  for (int num = 0; num <= 15; num++){
    digitalWrite(13, (num & 0b0001) ? HIGH: LOW);
    digitalWrite(12, (num & 0b0010) ? HIGH: LOW);
    digitalWrite(11, (num & 0b0100) ? HIGH: LOW);
    digitalWrite(10, (num & 0b1000) ? HIGH: LOW);
    delay(2000);
  }
  delay(10000);
}
