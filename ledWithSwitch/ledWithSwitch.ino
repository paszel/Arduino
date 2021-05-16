int red = 8;
int button = 7;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  digitalWrite(red, LOW);
}

void loop() {
   if (digitalRead(button) == LOW) { //Jeśli przycisk wciśnięty
    digitalWrite(red, HIGH); //Włącz diodę
    delay(10000); //Czekamy 10 sekund
    digitalWrite(red, LOW); //Wyłączamy diodę
  }
 
}
