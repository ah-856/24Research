#include "ADS1115_Sensor.h"

ADS1115_Sensor::ADS1115_Sensor(uint8_t address, uint8_t pH_channel, uint8_t conductivity_channel) : ads(address), pH_channel(pH_channel), conductivity_channel(conductivity_channel) {
  if (!ads.begin()) {
    Serial.println("Failed to initialize ADS1115!");
    while (1);
  }
}

float ADS1115_Sensor::readPH() {
  int16_t pH_reading = ads.readADC_SingleEnded(pH_channel);
  // Convert raw reading to pH value (adjust calibration as needed)
  float pH_value = (float)pH_reading / 1024.0 * 3.3; // Adjust calibration factor
  return pH_value;
}

float ADS1115_Sensor::readConductivity() {
  int16_t conductivity_reading = ads.readADC_SingleEnded(conductivity_channel);
  // Convert raw reading to conductivity value (adjust calibration as needed)
  float conductivity_value = (float)conductivity_reading / 1024.0 * 3.3; // Adjust calibration factor
  return conductivity_value;
}
