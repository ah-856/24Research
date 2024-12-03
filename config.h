#ifndef CONFIG_H
#define CONFIG_H

// Wi-Fi credentials
#define WIFI_SSID "Your_SSID"
#define WIFI_PASSWORD "Your_Password"

// MQTT server details
#define MQTT_SERVER "Your_MQTT_Server_IP"
#define MQTT_PORT 1883

// Sensor pins and configurations
#define DHT_PIN 2
#define DHT_TYPE DHT11

#define ADS1115_ADDRESS 0x48
#define pH_CHANNEL 0
#define CONDUCTIVITY_CHANNEL 1

// BME280 sensor configuration (optional, if using I2C address different from default)
#define BME280_ADDRESS 0x77 // Default address

#endif
