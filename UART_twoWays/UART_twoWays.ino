#define red 8
#define green 9

String recivedData = "";
bool isRedHigh = false;
bool isGreenHigh = false;

void setup() {
  Serial.begin(9600);

  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  digitalWrite(green, LOW);
  digitalWrite(red, LOW);
}

void loop() {
  if(Serial.available()> 0)
  {
    recivedData = Serial.readStringUntil('\n');
    if(recivedData == "g"){
      isGreenHigh = !isGreenHigh;
      if(isGreenHigh){
        digitalWrite(green, HIGH);         
      }
      else{
        digitalWrite(green, LOW);
      }
    }
    else if(recivedData == "r"){
      isRedHigh = !isRedHigh;
      if(isRedHigh){
        digitalWrite(red, HIGH);         
      }
      else{
        digitalWrite(red, LOW);
      }
    }
    else {
      Serial.println("Błędny kolor!");
    }
  }
}
