#include <LiquidCrystal_I2C.h>
#include  <Wire.h>
#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27,  20, 4);

void setup() {
  // Initialise la capteur DHT11
  Serial.begin(9600);
  dht.begin();
    // Initialize LCD screen
  lcd.init();
  // Turn on the backlight
  lcd.backlight();
   // leds temperature
  pinMode(5, OUTPUT); //Led bleu
  pinMode(6, OUTPUT); //Led verte
  pinMode(7, OUTPUT); //Led rouge

  // leds humidité
  pinMode(8, OUTPUT); //Led jaune
  pinMode(9, OUTPUT); //Led bleu
  pinMode(10, OUTPUT); //Led rouge

}

 

void loop() {

  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  lcd.setCursor(0,0);
  lcd.println("Temperature = " + String(dht.readTemperature())+" °C");


  lcd.setCursor(0,1);
  lcd.print("Humidite = " + String(dht.readHumidity())+" %");


  if (temp < 18) {
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  }

  if (temp >= 18 && temp <= 22) {
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  }

  if (temp > 22) {
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  }

  if (hum < 30) {
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  }

  if (hum >= 30 && hum <= 60) {
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  }

  if (hum > 60) {
  digitalWrite(10, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  }

}
