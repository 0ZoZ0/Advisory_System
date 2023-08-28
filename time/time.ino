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
  Serial.println("CLEARDATA");
  Serial.println("LABEL,TIME,TEMPERATURE,HUMIDITY");
}
void loop() { 
  temp = dht.readTemperature();
  humidity = dht.readHumidity();
  Serial.print("DATA,TIME,"); // prints time since program started
  Serial.print(temp);
  Serial.print(",");
  Serial.println(humidity);
  delay(2000);          // wait a second so as not to send massive amounts of data
}
