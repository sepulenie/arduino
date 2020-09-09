int ledpin = 13;
int buttonApin = 2;
int lighton = 0;

void setup() 
{
  pinMode(ledpin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
}


void loop() 
{
  if (digitalRead(buttonApin) == HIGH)
  {
    if (lighton == 0)
    {
      lighton = 1;
    }
    else
    {
      lighton = 0;
    }
  }

  if (lighton = 1)
  {
    digitalWrite(ledpin, LOW);
  }
  else
  {
    digitalWrite(ledpin, HIGH);
  }
  delay(500);
}
