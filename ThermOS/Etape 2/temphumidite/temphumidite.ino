LiquidCrystal_I2C lcd(0x27,  16, 2);
#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  dht.begin();
    //initialize lcd screen
}

void loop() {

}
