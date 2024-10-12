# Temperature and Humidity Monitoring System with DHT Sensor

## Project Overview
This project utilizes a **DHT11** sensor to monitor real-time temperature and humidity. The design and simulation are implemented using **Proteus software**, offering a practical solution for environmental monitoring in applications such as smart homes, greenhouses, and industrial setups.

## Features
- Real-time temperature and humidity data collection.
- DHT sensor interfacing with Arduino UNO.
- Designed and simulated in **Proteus**.
- User-friendly data visualization.

## Requirements
- **DHT11** Sensor
- Microcontroller - Arduino UNO
- **Proteus** software for circuit design and simulation
- Resistors, wires, and breadboard (for physical implementation)

## Installation and Setup
1. Clone the repository:
   ```bash
   git clone https://github.com/Deepthipriya30/Temperature-Humidity-Monitoring-DHT.git
2. Code
#include <Adafruit_Sensor.h>
#include <DHT.h>
#define dht_1 2  
#define DHTTYPE DHT11
DHT dht(dht_1, DHTTYPE);
void setup() {
  Serial.begin(9600);
  // Initialize device.
  dht.begin();
}
void loop() {
  // Delay between measurements.
  delay(2000);
  float humid = dht.readHumidity();
  float temp = dht.readTemperature();
  Serial.println("Humidity: ");
  Serial.println(humid);
  Serial.println("Temperatue: ");
  Serial.println(temp);
  Serial.println("Degree Centigrade");
  }


