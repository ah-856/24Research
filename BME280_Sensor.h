#ifndef BME280_SENSOR_H
#define BME280_SENSOR_H

#include <Adafruit_BME280.h>

class BME280_Sensor {
public:
  BME280_Sensor();
  float readTemperature();
  float readHumidity();
  float readPressure();
private:
  Adafruit_BME280 bme;
};

#endif
