#include <DHT.h>
#define DHTPIN 2         // DATA 핀
#define DHTTYPE DHT11    // DHT11 사용

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  Serial.println("DHT11 Test");
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("센서 읽기 실패!");
    delay(2000);
    return;
  }
  Serial.print("Temperature : ");
  Serial.print(temperature);
  Serial.print(" °C");
  Serial.print(" Humidity : ");
  Serial.print(humidity);
  Serial.println(" %");
  delay(2000);
}
