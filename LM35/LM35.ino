int lm35 = A0;                                // LM35 sıcaklık sensörünün bağlı olduğu analog pin (A0)
int value = 0;                                // Okunan analog değeri saklamak için değişken
float voltage = 0;                            // Analog değeri voltaja dönüştürmek için değişken
float tempature = 0;                          // Hesaplanan sıcaklık değeri (Celsius cinsinden)

void setup() {
  Serial.begin(9600);                         // Seri haberleşmeyi başlat, 9600 baud hızında
}

void loop() {
  value = analogRead(lm35);                   // LM35 sensöründen analog değer oku
  voltage = (5000.0 / 1023.0) * value;        // Okunan analog değeri voltaja çevir (5V referans ile)
  tempature = voltage / 10.0;                 // Voltajı 10'a bölerek sıcaklık değerini hesapla (LM35 için 1°C = 10mV)

  Serial.print("Tempature: ");                
  Serial.println(tempature);     
  delay(1000);                   
}