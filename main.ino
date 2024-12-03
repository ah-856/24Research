#include <WiFiNINA.h>
#include <PubSubClient.h>
#include "DHT_Sensor.h"
#include "BME280_Sensor.h"
#include "ADS1115_Sensor.h"
#include "Config.h"

// Create sensor objects
DHT_Sensor dht(DHT_PIN, DHT_TYPE);
BME280_Sensor bme;
ADS1115_Sensor ads(ADS1115_ADDRESS, pH_CHANNEL, CONDUCTIVITY_CHANNEL);

WiFiClient espClient;
PubSubClient client(espClient);

void setup() {
  // ... (Initialize Wi-Fi, MQTT, and sensors as before)
}

void loop() {
  // Read sensor data
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  float bme_temperature = bme.readTemperature();
  float bme_humidity = bme.readHumidity();
  float pressure = bme.readPressure();

  float pH_value = ads.readPH();
  float conductivity_value = ads.readConductivity();

  // Create JSON payload
  String payload = "{\"humidity\": " + String(humidity) + ", \"temperature\": " + String(temperature) + ", \"bme_temperature\": " + String(bme_temperature) + ", \"bme_humidity\": " + String(bme_humidity) + ", \"pressure\": " + String(pressure) + ", \"pH\": " + String(pH_value) + ", \"conductivity\": " + String(conductivity_value) + "}";

  // ... (Connect to MQTT broker and publish payload as before)
}
