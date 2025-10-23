void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() ;
  for (int val = 0; val <= 255; val++) {
    analogWrite(3, val);
    delay(20);
  }
  delay(5000);

  for (int val = 0; val <= 255; val++) {
    analogWrite(5, val);
    delay(20);
  }
  delay(5000);

  for (int val = 0; val <= 255; val++) {
    analogWrite(6, val);
    delay(20);
  }
  delay(5000);

  for (int val = 0; val <= 255; val++) {
    analogWrite(9, val);
    delay(20);
  }
  delay(5000);

  for (int val = 0; val <= 255; val++) {
    analogWrite(10, val);
    delay(20);
  }
  delay(5000);

  for (int i = 0; i < 3; i++) {
    analogWrite(3, 255);
    analogWrite(5, 255);
    analogWrite(6, 255);
    analogWrite(9, 255);
    analogWrite(10, 255);
    delay(300);

    analogWrite(3, 0);
    analogWrite(5, 0);
    analogWrite(6, 0);
    analogWrite(9, 0);
    analogWrite(10, 0);
    delay(300);
  }
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);
}
