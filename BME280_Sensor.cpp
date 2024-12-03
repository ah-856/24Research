#include "BME280_Sensor.h"

BME280_Sensor::BME280_Sensor() {
  if (!bme.begin()) {
    Serial.println("Could not find a valid BME280 sensor, check wiring!");
    while (1);
  }
}

float BME280_Sensor::readTemperature() {
  return bme.readTemperature();
}

float BME280_Sensor::readHumidity() {
  return bme.readHumidity();
}

float BME280_Sensor::readPressure() {
  return bme.readPressure() / 100.0F; 1 
}
