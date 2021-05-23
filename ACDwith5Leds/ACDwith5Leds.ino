#define green1 12
#define green2 11
#define yellow 10
#define red1 9
#define red2 8

int acdValue = 0;

void setup() {
  pinMode(green1, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
}

void loop() {
  acdValue = analogRead(A5);
  acdValue = map(acdValue, 0, 1023, 1, 5);

  switch(acdValue){
    case 1:
      digitalWrite(red2, HIGH);
      digitalWrite(red1, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(green2, LOW);
      digitalWrite(green1, LOW);
    break;
    case 2:
      digitalWrite(red2, LOW);
      digitalWrite(red1, HIGH);
      digitalWrite(yellow, LOW);
      digitalWrite(green2, LOW);
      digitalWrite(green1, LOW);
    break;
    case 3:
      digitalWrite(red2, LOW);
      digitalWrite(red1, LOW);
      digitalWrite(yellow, HIGH);
      digitalWrite(green2, LOW);
      digitalWrite(green1, LOW);
    break;
    case 4:
      digitalWrite(red2, LOW);
      digitalWrite(red1, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(green2, HIGH);
      digitalWrite(green1, LOW);
    break;
    case 5:
      digitalWrite(red2, LOW);
      digitalWrite(red1, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(green2, LOW);
      digitalWrite(green1, HIGH);
    break;
  }

  delay(50);
}
