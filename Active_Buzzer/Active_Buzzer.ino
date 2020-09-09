int buzzer = 11;
int redled = 2;
int blueled = 7;
int button = 13;
boolean ison = false;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(redled, OUTPUT);
  pinMode(blueled, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}
int currentled = 0; //0 is red and 1 is blue
void loop() {
  int tonedelay = 0;

  if (digitalRead(button) == LOW){
    if (ison == false){
      ison = true;
      delay(200);
    }
    else{
     ison = false;
     delay(200);
    }
  }
  if (ison == true){
    for (int i = 1000; (i < 2000 && digitalRead(button) == HIGH) ; i += 1){
      tonedelay = i/10;
      digitalWrite(buzzer, HIGH);
      if (currentled == 0) {
        digitalWrite(redled, HIGH);
        currentled = 1;
      }
      else {
        digitalWrite(blueled, HIGH);
        currentled = 0;
      }    
      delay(tonedelay);
      digitalWrite(buzzer, LOW);
      digitalWrite(redled, LOW);
      digitalWrite(blueled, LOW);
      delay(tonedelay);
    }
  }
}     
