int first = 0;
// 
void fadeLED(int pin1, int pin2) {
  for (int val = 0; val <= 255; val++) {
    analogWrite(pin1, 255 - val); 
    analogWrite(pin2, val);       
    delay(5);
  }
}

void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  if (first == 0) {
    fadeLED(0, 3);
    first += 1;
  }
  fadeLED(3, 5);
  fadeLED(5, 6);
  fadeLED(6, 9);
  fadeLED(9, 10);
  fadeLED(10, 3); 
}
