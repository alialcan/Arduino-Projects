void setup() {
  Serial.begin(9600);               // Seri monitörü başlatma
  for(int i=1; i<10; i++){          // For döngüsü oluşturma 
    Serial.println(i*i);
  }
}

void loop() {
  
}