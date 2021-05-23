#define led 2
int value = 0;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  value = analogRead(A5);
  digitalWrite(led, HIGH);
  delay(value);
  digitalWrite(led, LOW);
  delay(value);
}
