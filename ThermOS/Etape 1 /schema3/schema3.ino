// Programme chenillard de 4 leds
    void setup() {
     pinMode(11, OUTPUT); // Définir la LED intégrée en mode sortie
     pinMode(2, OUTPUT);
     pinMode(13, OUTPUT);
     pinMode(9, OUTPUT);
    }

    void loop() {
     digitalWrite(11, HIGH); // Allume la LED
     delay(100);
     digitalWrite(11, LOW);        
     delay(100);
     digitalWrite(2, HIGH); // Allume la LED
     delay(100);
     digitalWrite(2, LOW);        
     delay(100);
     digitalWrite(13, HIGH); // Allume la LED
     delay(100);
     digitalWrite(13, LOW);        
     delay(100);
     digitalWrite(9, HIGH); // Allume la LED
     delay(100);
     digitalWrite(9, LOW);        
     delay(100);
    }

    