#include <DHT.h>
#include <DHT_U.h>
#define DHTPIN 8
#define DHTTYPE DHT11

DHT dht(DHTPIN,DHTTYPE);
float temp = 0;
float humidity = 0;

void setup() {
 Serial.begin(38400);
 dht.begin();
}

void loop() {
  temp = dht.readTemperature();
  humidity = dht.readHumidity();
  if(temp>=27)
  {
    Serial.println("A");
  }
  else
  {
    Serial.println("a");
  }
  delay(2000);
}
