
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
  