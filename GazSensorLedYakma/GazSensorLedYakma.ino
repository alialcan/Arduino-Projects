#define LED 6
#define SENSOR 7

int value;

void setup() {
  Serial.begin(115200);
  pinMode(SENSOR, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  
  if(value=digitalRead(SENSOR)){
    digitalWrite(LED, LOW);
  }
  else{
    digitalWrite(LED, HIGH);
    delay(2000);
    digitalWrite(LED, LOW);
  }
}