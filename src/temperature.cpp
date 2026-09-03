#include <Arduino.h>
#include <DHT.h>
#include <DHT_U.h>

DHT dht(7, DHT11);

void setup()
{
  Serial.begin(9600);
  dht.begin();
}

void loop()
{
  float harorat = dht.readTemperature();
  float namlik = dht.readHumidity();

  Serial.println("Harorat: ");
  Serial.println(harorat);
  Serial.println("Namlik: ");
  Serial.println(namlik);

  delay(500);
}