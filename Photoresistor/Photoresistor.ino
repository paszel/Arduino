#define led 8
int value = 0;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  value = analogRead(A5);

  if(value < 100){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }

  delay(50);
}
