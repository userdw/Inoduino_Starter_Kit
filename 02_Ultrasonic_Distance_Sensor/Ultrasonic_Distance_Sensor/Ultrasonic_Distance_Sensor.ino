#include <LiquidCrystal.h>

LiquidCrystal lcd(5, 6, 10, 11, 12, 13);
int trigpin = 8;
int echopin = 9;

void setup()
{
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  lcd.begin(16, 2);
  lcd.clear();
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
  int duration = pulseIn(echopin, HIGH);
  int distance = duration / 58;
  lcd.setCursor(0, 0);
  lcd.print("jarak=");
  lcd.print(distance);
  lcd.print("cm");
}
