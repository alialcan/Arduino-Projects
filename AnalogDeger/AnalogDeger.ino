int deger=0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  deger = analogRead(A0);
  Serial.print("Deger:");
  Serial.println(deger);

  float gerilim = deger*(5.0/1023.0);
  Serial.print("Gerilim:");
  Serial.println(gerilim);
  delay(1000);
}