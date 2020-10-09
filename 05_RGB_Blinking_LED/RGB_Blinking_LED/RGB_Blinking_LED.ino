int merahPin = 6;
int hijauPin = 5;
int biruPin = 3;
int tunda = 500;

void setup()
{
  pinMode(merahPin, OUTPUT);
  pinMode(hijauPin, OUTPUT);
  pinMode(biruPin, OUTPUT);
}

void loop()
{
  digitalWrite(merahPin, HIGH);
  delay(tunda);
  digitalWrite(merahPin, LOW);
  digitalWrite(hijauPin, HIGH);
  delay(tunda);
  digitalWrite(hijauPin, LOW);
  digitalWrite(biruPin, HIGH);
  delay(tunda);
  digitalWrite(biruPin, LOW);
}
