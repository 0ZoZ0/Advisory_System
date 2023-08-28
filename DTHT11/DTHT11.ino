
#include <DHT.h>
#include <DHT_U.h>
#define DHTPIN 8
#define DHTTYPE DHT11

DHT dht(DHTPIN,DHTTYPE);
float temp = 0;
float humidity = 0;

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(10,OUTPUT);
}

void loop() {
  humidity = dht.readHumidity();
  temp = dht.readTemperature();
  if((temp>=25)&&(humidity>=50))
  {
    digitalWrite(10,HIGH);
    Serial.print("Humidity (%): ");
    Serial.println(humidity);
    Serial.print("Temperature (C): ");
    Serial.println(temp);
    Serial.println("WARNING!! : Temperature and Humidity Value greater than threshold!!");
  }
  else
  {
    digitalWrite(10,LOW);
    Serial.print("Humidity (%): ");
    Serial.println(humidity);
    Serial.print("Temperature (C): ");
    Serial.println(temp);
  }
  delay(2000);
}
