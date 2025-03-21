// Buton durumunu okuyup seri ekrana yazdırma

#define BUTTON_PIN 7

void setup() {
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  int value = digitalRead(BUTTON_PIN);
  Serial.println(value);
}
