#include <Adafruit_GFX.h>      // Adafruit tarafından sağlanan grafik işlemleri için kütüphane
#include <Adafruit_ST7735.h>   // ST7735 sürücülü TFT ekranlar için kütüphane
#include <SPI.h>               // SPI iletişimini sağlamak için kütüphane

// LCD'nin bağlı olduğu pinler tanımlanıyor
#define TFT_CS    10  // Chip Select pini, SPI haberleşmesini başlatır/durdurur
#define TFT_RST   9   // Reset pini, ekranı sıfırlamak için kullanılır
#define TFT_DC    8   // Data/Command pini, gönderilen bilginin veri mi yoksa komut mu olduğunu belirler
#define TFT_BLK   7   // Arka aydınlatma pini, ekranın ışığını kontrol eder

// Adafruit ST7735 nesnesi oluşturuluyor ve pinler atanıyor
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  pinMode(TFT_BLK, OUTPUT);        // Arka aydınlatma pini çıkış olarak ayarlanıyor
  digitalWrite(TFT_BLK, HIGH);     // Arka aydınlatma açılıyor (HIGH: 5V vererek LED'i yakıyoruz)

  tft.initR(INITR_BLACKTAB);       // Ekranı başlatıyoruz (INITR_BLACKTAB: ekran tipi tanımı)
  tft.fillScreen(ST77XX_BLACK);    // Ekranı siyaha boyuyoruz (ST77XX_BLACK: siyah renk kodu)

  tft.setTextSize(2);              // Yazı boyutunu 2 katına ayarlıyoruz
  tft.setTextColor(ST77XX_WHITE);  // Yazı rengini beyaz olarak ayarlıyoruz
  tft.setCursor(10, 20);           // Yazının ekranda başlayacağı konumu belirliyoruz (x=10, y=20)
  tft.print("Merhaba!");           // "Merhaba!" metnini ekrana yazdırıyoruz
}

void loop() {
  
}