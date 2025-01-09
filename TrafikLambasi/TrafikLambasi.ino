// Trafik Lambası Uygulaması 
// Bu program 3 adet ledi belli sürelerde yakıp söndürür

#define RED 8
#define YELLOW 9
#define GREEN 10

void setup() {
  pinMode(RED, OUTPUT);              // Kırmızı Led
  pinMode(YELLOW, OUTPUT);           // Sarı Led
  pinMode(GREEN, OUTPUT);            // Yeşil Led
}

void loop() {
  digitalWrite(RED, HIGH);           // Kırmızı yak
  delay(3000);                
  digitalWrite(YELLOW, HIGH);        // Sarı yak
  delay(1000);
  digitalWrite(RED, LOW);            // Kırmızı söndür
  digitalWrite(YELLOW, LOW);         // Sarı söndür
  digitalWrite(GREEN, HIGH);         // Yeşil yak
  delay(3000);
  digitalWrite(YELLOW, HIGH);        // Sarı yak
  delay(1000); 
  digitalWrite(GREEN, LOW);          // Yeşil söndür
  digitalWrite(YELLOW, LOW);         // Sarı söndür
}