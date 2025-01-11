#include <Keypad.h> // Keypad kütüphanesini dahil et

#define LED 12 // LED'in bağlı olduğu pin tanımlaması

// Keypad boyutu için satır ve sütun sayıları
const byte ROWS = 4; 
const byte COLS = 4; 

// Doğru şifreyi saklayan değişken
String sifre = "1234";     
// Kullanıcının girdiği şifreyi tutan değişken
String girilen_sifre = ""; 

// Keypad üzerindeki tuşların haritası
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

// Satır ve sütun pinlerinin tanımlanması
byte rowPins[ROWS] = {9, 8, 7, 6}; 
byte colPins[COLS] = {5, 4, 3, 2}; 

// Keypad nesnesi oluşturma
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup() {
  Serial.begin(9600); // Seri haberleşmeyi başlat
  pinMode(LED, OUTPUT); // LED pinini çıkış olarak ayarla
}

void loop() {
  char key = keypad.getKey(); // Keypad'den basılan tuşu al
  
  if (key) { // Eğer bir tuşa basıldıysa
    Serial.print("Basılan tuş: ");
    Serial.println(key);
    
    if (key == '#') { // '#' tuşuna basıldığında şifre kontrolü yap
      if (girilen_sifre == sifre) { // Girilen şifre doğru mu kontrol et
        Serial.println("Sifre dogru, LED yanıyor.");
        digitalWrite(LED, HIGH);  // LED'i yak
        delay(2000);              // 2 saniye bekle
        digitalWrite(LED, LOW);   // LED'i söndür
      } else { // Şifre yanlışsa
        Serial.println("Yanlis sifre!");
      }
      girilen_sifre = ""; // Şifre kontrolünden sonra girilen şifreyi sıfırla
    } 
    else if (key == '*') { // '*' tuşuna basıldığında girilen şifreyi sıfırla
      girilen_sifre = "";
      Serial.println("Girilen sifre sifirlandi.");
    } 
    else { // Eğer sayı tuşlarından birine basıldıysa
      girilen_sifre += key; // Basılan tuşu girilen şifreye ekle
    }
  }
}