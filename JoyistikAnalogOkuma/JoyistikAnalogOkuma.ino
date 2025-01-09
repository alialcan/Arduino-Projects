void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("X Deger: ");
  Serial.println(analogRead(A0));
  Serial.print("Y Deger: ");
  Serial.println(analogRead(A1));
  Serial.println("____________________");
  delay(500);
}