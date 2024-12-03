#ifndef DHT_SENSOR_H
#define DHT_SENSOR_H

#include <DHT.h>

class DHT_Sensor {
public:
  DHT_Sensor(int pin, int type);
  float readHumidity();
  float readTemperature();
private:
  DHT dht;
};

#endif
