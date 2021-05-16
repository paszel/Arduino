int red = 10;
int yellow = 9;
int green = 8;
int button = 7;

void setup() {
  pinMode(red ,OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

  pinMode(button, INPUT_PULLUP);

  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
}

void loop() {

  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);

  delay(1000);
  //while(digitalRead(button) == HIGH){}

  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  
  delay(1000);
  //while(digitalRead(button) == HIGH){}

  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);

  delay(1000);
  //while(digitalRead(button) == HIGH){}

  digitalWrite(red, HIGH);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);

  delay(1000);
  //while(digitalRead(button) == HIGH){}
  
}
