#include "DHT_Sensor.h"

DHT_Sensor::DHT_Sensor(int pin, int type) : dht(pin, type) {
  dht.begin();
}

float DHT_Sensor::readHumidity() {
  return dht.readHumidity();
}

float DHT_Sensor::readTemperature() {
  return dht.readTemperature();
}
