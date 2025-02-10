// RGB LED pinleri
#define RED_PIN 9
#define GREEN_PIN 10
#define BLUE_PIN 11

// Pinlerin çıkış olarak ayarlanması 
void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  setColor(255, 0, 0);      // Kırmızı
  delay(1000);
  setColor(0, 255, 0);      // Yeşil
  delay(1000);
  setColor(0, 0, 255);      // Mavi
  delay(1000);
  setColor(255, 255, 0);    // Sarı 
  delay(1000);
  setColor(0, 255, 255);    // Camgöbeği 
  delay(1000);
  setColor(255, 0, 255);    // Mor 
  delay(1000);
  setColor(255, 255, 255);  // Beyaz 
  delay(1000);
  setColor(0, 0, 0);        // Kapalı
  delay(1000);
}

// RGB LED'e renk atama fonksiyonu
void setColor(int red, int green, int blue) {
  analogWrite(RED_PIN, red);
  analogWrite(GREEN_PIN, green);
  analogWrite(BLUE_PIN, blue);
}
