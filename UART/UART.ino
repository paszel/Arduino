#define red 8
#define green 9
#define button 10

void setup() {
  Serial.begin(9600); // prędkość transmisij / sek [9600, 115200]
  Serial.println("Hello World!");

  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT_PULLUP);

  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
}

void loop() {
  if(digitalRead(button) == LOW)
  {
    digitalWrite(green, HIGH);  
    digitalWrite(red, LOW);
  }
  else{
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    
    Serial.println("Uwaga!  Alarm! Okno nie jest zamknięte!");
  } 

  while(digitalRead(button) == HIGH){
    delay(25);
  }
  
}
