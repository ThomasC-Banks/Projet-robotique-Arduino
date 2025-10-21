// Programme de test pour faire clignoter plusieurs LED avec une vitesse variable

void setup() {
  pinMode(11, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
    //Boucle for pour faire varier la vitesse des leds
  for (int delai = 500; delai >= 100; delai -= 100) {
    allumerLEDs(delai);
  }
}

// Fonction pour faire clignoter les leds
void allumerLEDs(int delai) {
  digitalWrite(11, HIGH);
  delay(delai);
  digitalWrite(11, LOW);
  delay(delai);

  digitalWrite(2, HIGH);
  delay(delai);
  digitalWrite(2, LOW);
  delay(delai);

  digitalWrite(13, HIGH);
  delay(delai);
  digitalWrite(13, LOW);
  delay(delai);

  digitalWrite(9, HIGH);
  delay(delai);
  digitalWrite(9, LOW);
  delay(delai);
}
