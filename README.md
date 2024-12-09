Arduino-Based Duckweed Monitoring System

This repository contains the code and documentation for an Arduino-based system designed to monitor various parameters in a duckweed cultivation environment.

 Features:

Sensor Integration:**
  - DHT11 for temperature and humidity
  - BME280 for temperature, humidity, and pressure
  - ADS1115 for pH and conductivity measurements
 Data Acquisition and Processing:**
   - Reads sensor data at regular intervals
  - Processes and filters the data
Wireless Communication:**
  - Uses Wi-Fi to connect to the internet
  - Sends sensor data to an MQTT broker

 Hardware Requirements:
* Arduino board (e.g., Uno, Nano)
* DHT11 temperature and humidity sensor
* BME280 environmental sensor
* ADS1115 ADC
* Wi-Fi module (e.g., ESP8266, ESP32)
* Power supply

Software Requirements:
* Arduino IDE
* Libraries for DHT, BME280, and ADS1115 sensors
* MQTT library for Wi-Fi communication

 Getting Started:
1. Clone the repository:**
   ```bash
   git clone [invalid URL removed]
