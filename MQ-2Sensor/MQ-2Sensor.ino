float value;

void setup() {
  Serial.begin(9600);
}

void loop() {
  value=analogRead(A0);
  Serial.print("Gaz Degeri: ");
  Serial.println(value);
  delay(1000);
}