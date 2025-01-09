// Led Yakıp Söndürme Programı
// Bir saniye boyunca kartın üzerinde bulunan ledi yakıp söndürür

#define LED 13               // Led tanımlama

void setup() {
  pinMode(LED, OUTPUT);      // 13 nolu pin çıkış olarak ayarlandı
}

void loop() {
  digitalWrite(LED, HIGH);   // Ledi yak
  delay(1000);               // Bir saniye bekle
  digitalWrite(LED, LOW);    // Ledi söndür
  delay(1000);               // Bir saniye bekle 
}