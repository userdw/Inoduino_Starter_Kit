const int photocellPin = A0;
const int ledPin = 11;
const int relayPin = 10;
int photocellValue = 0;
const int buzzerPin = 12;

void setup()
{
  pinMode(relayPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  photocellValue = analogRead(photocellPin);
  Serial.print("Photocell value: ");
  Serial.println(photocellValue);
  if (photocellValue >= 400)
  {
    digitalWrite(ledPin, HIGH);
    digitalWrite(relayPin, LOW);
    digitalWrite(buzzerPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
    digitalWrite(relayPin, HIGH);
    digitalWrite(buzzerPin, LOW);
  }
  delay(1000);
}
