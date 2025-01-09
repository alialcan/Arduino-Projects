#define LED 7
#define SENSOR 6

int value=0;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(SENSOR, INPUT);
}

void loop() {
  value=digitalRead(SENSOR);
  if(value==HIGH){
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED, LOW);
  }
}