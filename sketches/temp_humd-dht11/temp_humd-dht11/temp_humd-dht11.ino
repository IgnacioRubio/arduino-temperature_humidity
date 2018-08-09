/*
 * Program Name: Temperature and Humidity
 * Author: Ignacio Rubio 
 * Date: 9 August 2018
 * Description: Shows temperature and humidity on serial monitor.
 */

#include <dht.h>

dht DHT;

const int dhtPin = 2;

void setup() {
  Serial.begin(9600);
}

void loop() {
  DHT.read11(dhtPin);

  Serial.print("Current humidity = ");
  Serial.print(DHT.humidity);
  Serial.print("%  ");

  Serial.print("Temperature = ");
  Serial.print(DHT.temperature); 
  Serial.println("C");

  delay(2000);
}
