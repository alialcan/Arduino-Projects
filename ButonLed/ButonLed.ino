#define LED 7
#define BUTTON 6

int buttonValue=0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  buttonValue = digitalRead(BUTTON);
  if(buttonValue){
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED, LOW);
  }
}