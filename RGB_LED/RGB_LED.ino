#define RED 11
#define GREEN 10
#define BLUE 9

void setup() 
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);

}

int redvalue;
int greenvalue;
int bluevalue;
void loop() 
{
  redvalue = 255;  
  greenvalue = 0;
  bluevalue = 0;

  for (int i = 0; i < 255; i +=1)
  {
    redvalue -= 1;
    greenvalue += 1;
    analogWrite(RED, redvalue);
    analogWrite(GREEN, greenvalue);
    delay(10);
  }
  delay(1000);
  for (int i = 0; i < 255; i +=1)
  {
    greenvalue -= 1;
    bluevalue += 1;
    analogWrite(GREEN, greenvalue);
    analogWrite(BLUE, bluevalue);
    delay(10);
  }
  delay(1000);
  for (int i = 0; i < 255; i +=1)
  {
    bluevalue -= 1;
    redvalue += 1;
    analogWrite(BLUE, bluevalue);
    analogWrite(RED, redvalue);
    delay(10);
  }
  delay(1000);

}
