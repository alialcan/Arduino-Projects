int relayPin = 8;                   // Rölenin bağlı olduğu pin (IN bacağı)

void setup() {
  pinMode(relayPin, OUTPUT);        // Röle pinini çıkış olarak ayarla
  Serial.begin(9600);               // Seri haberleşmeyi başlat (opsiyonel, durumu görmek için)
}

void loop() {
  digitalWrite(relayPin, HIGH);     // Röleyi aktif et (röle kontakları kapanır)
  Serial.println("Röle Açık");
  delay(2000);                      // 2 saniye bekle

  digitalWrite(relayPin, LOW);      // Röleyi kapat (röle kontakları açılır)
  Serial.println("Röle Kapalı");
  delay(2000);                      // 2 saniye bekle
} 