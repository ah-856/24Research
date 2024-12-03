#ifndef ADS1115_SENSOR_H
#define ADS1115_SENSOR_H

#include <Adafruit_ADS1X15.h>

class ADS1115_Sensor {
public:
  ADS1115_Sensor(uint8_t address, uint8_t pH_channel, uint8_t conductivity_channel);
  float readPH();
  float readConductivity();
private:
  Adafruit_ADS1115 ads;
  uint8_t pH_channel, conductivity_channel;
};

#endif
