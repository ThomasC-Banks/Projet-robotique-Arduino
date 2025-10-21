// Programme de test pour faire clignoter deux LED intégrée toutes les secondes
    void setup() {
     pinMode(5, OUTPUT); // Définir la LED intégrée en mode sortie
     pinMode(6, OUTPUT)
    }

    void loop() {
     digitalWrite(5, HIGH); // Allume la LED
     delay(1000);           // Attendre 1 seconde
     digitalWrite(5, LOW); // Éteint la LED
     delay(1000);           // Attendre 1 seconde
     digitalWrite(6, HIGH); // Allume la LED
     delay(1000);           // Attendre 1 seconde
     digitalWrite(6, LOW); // Éteint la LED
     delay(1000);           // Attendre 1 seconde
    }