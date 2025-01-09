void cizgi(){                           // Fonksiyon oluşturma 
  for(int i=0; i<30; i++)
    Serial.print("-");
    Serial.println();
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  cizgi();
  Serial.println("Merhaba Dunya");
  cizgi();
  while(1);
}