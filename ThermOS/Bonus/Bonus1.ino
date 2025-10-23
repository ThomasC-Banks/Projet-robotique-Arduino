void setup() {
    // Réglage du port numérique associé à la LED : mode sortie = OUTPUT
    pinMode(3, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);

   }

void loop() {
  // LED sur broche 3
  for (int val = 0; val <= 255; val++) {
    analogWrite(3, val);
    analogWrite(5, val);
    analogWrite(6, val);
    analogWrite(9, val);
    analogWrite(10, val);
    delay(20);
  }
  for (int val = 255; val >= 0; val--) {
    analogWrite(3, val);
    analogWrite(5, val);
    analogWrite(6, val);
    analogWrite(9, val);
    analogWrite(10, val);
    delay(20);
  }
}
