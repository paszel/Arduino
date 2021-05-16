int red = 8;
int button = 7;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  digitalWrite(red, LOW);
}

void loop() {

  if(digitalRead(button) == LOW){
    digitalWrite(red, HIGH);
  }
  else{
    digitalWrite(red, LOW);  
  }  
}
