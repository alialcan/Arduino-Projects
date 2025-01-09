#include <LiquidCrystal.h>                     // Kütüphane ekleme

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);         // LCD ayaklarını tanımlama

void setup() { 
  lcd.begin(16, 2);                            // LCD Başlat
  lcd.print("Merhaba Dunya");                  // LCD Yazdır 
}

void loop() {
  lcd.setCursor(0,1);                          // LCD imleci ayarla
  lcd.print(millis()/1000);                    // Geçen zamanı yazdır
}