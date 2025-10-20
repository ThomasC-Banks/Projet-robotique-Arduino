// Programme de test pour faire clignoter la LED intégrée toutes les secondes
    void setup() {
     pinMode(11, OUTPUT); // Définir la LED intégrée en mode sortie
     pinMode(2, OUTPUT);
     pinMode(13, OUTPUT);
     pinMode(9, OUTPUT);
    }

    void loop() {
     digitalWrite(11, HIGH); // Allume la LED
     delay(1000);
     digitalWrite(11, LOW);        
     delay(1000);
     digitalWrite(2, HIGH); // Allume la LED
     delay(1000);
     digitalWrite(2, LOW);        
     delay(1000);
    }

    