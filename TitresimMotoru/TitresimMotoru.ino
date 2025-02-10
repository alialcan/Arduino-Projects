#define BUTTON_PIN 8  // Buton 8. pine bağlı
#define MOTOR_PIN 9   // Motor 9. pine bağlı

void setup() {
  pinMode(BUTTON_PIN, INPUT); 
  pinMode(MOTOR_PIN, OUTPUT);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == HIGH) {         // Butona basılınca HIGH)
    analogWrite(MOTOR_PIN, 255);                 // Motoru çalıştır (tam güç)
  } else {
    analogWrite(MOTOR_PIN, 0);                   // Motoru kapat
  }
}
