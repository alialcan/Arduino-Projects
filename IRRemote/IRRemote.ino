// KUMANDA TUŞ KODLARI (hexadecimal format)
#define BUTON0 0xE916FF00
#define BUTON1 0xF30CFF00 
#define BUTON2 0xE718FF00 
#define BUTON3 0xA15EFF00
#define BUTON4 0xF708FF00
#define BUTON5 0xE31CFF00
#define BUTON6 0xA55AFF00
#define BUTON7 0xBD42FF00
#define BUTON8 0xAD52FF00
#define BUTON9 0xB54AFF00

#include <IRremote.h> 

int RECV_PIN = 7;   
int LED = 8;     

void setup() {
  pinMode(LED, OUTPUT); 
  Serial.begin(9600);    
  IrReceiver.begin(RECV_PIN, ENABLE_LED_FEEDBACK);                // IR alıcıyı başlat
  Serial.println("IR Alıcı Başladı...");  
}

void loop() {
  // IR alıcıdan veri gelirse
  if (IrReceiver.decode()) {
    unsigned long kod = IrReceiver.decodedIRData.decodedRawData;  // Gelen IR kodunu oku

    if (kod == BUTON1) {  
      digitalWrite(LED, HIGH);                                    // LED'i yak
      Serial.println("LED Yandı");  
    }

    else if (kod == BUTON2) {  
      digitalWrite(LED, LOW);                                     // LED'i söndür
      Serial.println("LED Söndü");  
    }

    IrReceiver.resume();                                          // Alıcıyı sıfırla ve yeni sinyal beklemeye başla
    
  }
}