#include <LiquidCrystal_I2C.h>
#include  <Wire.h>
LiquidCrystal_I2C lcd(0x27,  16, 2);
#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // Initialise la capteur DHT11
  dht.begin();
  // Initialize LCD screen
  lcd.init();
  // Turn on the backlight
  lcd.backlight();
  
  Serial.begin(9600);
  

}

void loop() {
  // Wait for a second
  delay(1000);

  // Tell the screen to write on the top row
  lcd.setCursor(0, 0);
  // Write on the top row
  lcd.print("Temperature = " + String(dht.readTemperature())+" °C");
  
  // Tell the screen to write on the bottom row
  lcd.setCursor(0, 1);
  // Write on the bottom row
  lcd.print("Humidite = " + String(dht.readHumidity())+" %");
}
