// Kara Şimşek Uygulaması

#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5
#define LED5 6
#define LED6 7
#define LED7 8
#define LED8 9
#define LED9 10
#define LED10 11

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
  pinMode(LED10, OUTPUT);
}

void loop() {

  int hiz=200;               // Hız değişkeni oluşturuldu 

  // İleri doğru gider
  digitalWrite(LED1, HIGH);
  delay(hiz);
  digitalWrite(LED1, LOW);
  
  digitalWrite(LED2, HIGH);
  delay(hiz);
  digitalWrite(LED2, LOW);

  digitalWrite(LED3, HIGH);
  delay(hiz);
  digitalWrite(LED3, LOW);

  digitalWrite(LED4, HIGH);
  delay(hiz);
  digitalWrite(LED4, LOW);

  digitalWrite(LED5, HIGH);
  delay(hiz);
  digitalWrite(LED5, LOW);

  digitalWrite(LED6, HIGH);
  delay(hiz);
  digitalWrite(LED6, LOW);

  digitalWrite(LED7, HIGH);
  delay(hiz);
  digitalWrite(LED7, LOW);

  digitalWrite(LED8, HIGH);
  delay(hiz);
  digitalWrite(LED8, LOW);

  digitalWrite(LED9, HIGH);
  delay(hiz);
  digitalWrite(LED9, LOW);

  digitalWrite(LED10, HIGH);
  delay(hiz);
  digitalWrite(LED10, LOW);

  // Geriye doğru gider
  digitalWrite(LED9, HIGH);
  delay(hiz);
  digitalWrite(LED9, LOW);

  digitalWrite(LED8, HIGH);
  delay(hiz);
  digitalWrite(LED8, LOW);

  digitalWrite(LED7, HIGH);
  delay(hiz);
  digitalWrite(LED7, LOW);

  digitalWrite(LED6, HIGH);
  delay(hiz);
  digitalWrite(LED6, LOW);

  digitalWrite(LED5, HIGH);
  delay(hiz);
  digitalWrite(LED5, LOW);

  digitalWrite(LED4, HIGH);
  delay(hiz);
  digitalWrite(LED4, LOW);

  digitalWrite(LED3, HIGH);
  delay(hiz);
  digitalWrite(LED3, LOW);

  digitalWrite(LED2, HIGH);
  delay(hiz);
  digitalWrite(LED2, LOW);
}