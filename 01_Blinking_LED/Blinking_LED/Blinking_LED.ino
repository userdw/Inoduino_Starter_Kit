int inputPB1 = 2;
int inputPB2 = 3;
int inputPB3 = 4;
int outputLED1 = 10;
int outputLED2 = 11;
int outputLED3 = 12;

void setup()
{
  pinMode(inputPB1, INPUT_PULLUP);
  pinMode(inputPB2, INPUT_PULLUP);
  pinMode(inputPB3, INPUT_PULLUP);
  pinMode(outputLED1, OUTPUT);
  pinMode(outputLED2, OUTPUT);
  pinMode(outputLED3, OUTPUT);
}

void loop()
{
  if (digitalRead(inputPB1) == LOW)
  {
    digitalWrite(outputLED1, HIGH);
  }
  else if (digitalRead(inputPB2) == LOW)
  {
    digitalWrite(outputLED2, HIGH);
  }
  else if (digitalRead(inputPB3) == LOW)
  {
    digitalWrite(outputLED3, HIGH);
  }
  else //selain kondisi di atas semua LED mati
  {
    digitalWrite(outputLED1, LOW);
    digitalWrite(outputLED2, LOW);
    digitalWrite(outputLED3, LOW);
  }
}
