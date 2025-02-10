#define SENSOR_PIN A0  // Sensörün analog çıkışı A0 pinine bağlı

void setup() {
  Serial.begin(9600); // Seri haberleşmeyi başlat
}

void loop() {
  int sensorValue = analogRead(SENSOR_PIN);  // Sensörden gelen analog değeri oku
  float voltage = sensorValue * (5.0 / 1023.0);  // Okunan değeri voltaj cinsine çevir

  Serial.print("Analog Değer: ");
  Serial.print(sensorValue); // Analog değeri yazdır
  Serial.print(" - Voltaj: ");
  Serial.print(voltage); // Voltaj değerini yazdır
  Serial.println(" V");

  delay(1000); // 1 saniye bekle
}

