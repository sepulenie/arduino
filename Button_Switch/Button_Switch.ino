int ledpin = 13;
int buttonpin = 2;
boolean lighton = false;

void setup(){
  pinMode(ledpin, OUTPUT);
  pinMode(buttonpin, INPUT_PULLUP);  
}

void loop(){
  
  if (digitalRead(buttonpin) == LOW && lighton == false){
    digitalWrite(ledpin, HIGH);
    lighton = true;
    delay(500);
  }
  if (digitalRead(buttonpin) == LOW && lighton == true){
    digitalWrite(ledpin, LOW);
    lighton = false;
    delay(500);
  }
}
