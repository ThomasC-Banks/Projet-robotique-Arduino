#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,  16, 2);
#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  pinMode(3 OUTPUT)
  pinMode(4 OUTPUT)
  pinMode(5 OUTPUT)
  
  dht.begin();
    //initialize lcd screen
}

void loop() {
  if (temperature < 18)
  digitaleWrite(2, OUTPUT);
  digitaleWrite(4, LOW);
  digitaleWrite(5, LOW);





  // Recupere la temperature et l'humidite du capteur et l'affiche
  // sur le moniteur serie
  Serial.println("Temperature = " + String(dht.readTemperature())+" °C");
  // Attend 10 secondes avant de reboucler
  delay(10000);
}
