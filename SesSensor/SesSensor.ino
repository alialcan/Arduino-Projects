#define LED 7
#define SENSOR 5

int value=0;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(SENSOR, INPUT);
}

void loop() {
  value = digitalRead(SENSOR);
  if(value){
    digitalWrite(LED, LOW);
  }
  else{
    digitalWrite(LED, HIGH);
  }
}
