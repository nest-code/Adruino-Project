#include "DHT.h"

#define DHTPIN 2     
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("Tes Suhu & Kelembaban");
  dht.begin();
}

void loop() {
  delay(2000);
  float t = dht.readTemperature(); //suhu
  float h = dht.readHumidity(); //kelembaban
  
  if (isnan(t) || isnan(h)) {
    Serial.println("Periksa konfigurasi pin/kabelnya");
    Serial.println("Sensor tidak terbaca");
    return;
  }

  Serial.print("Suhu : ");
  Serial.print(t);
  Serial.print(" *Ct");
  Serial.print("Kelembaban: ");
  Serial.print(h);
  Serial.println(" %");
}
