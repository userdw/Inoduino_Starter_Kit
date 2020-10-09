#include <Servo.h>

Servo myservo;
int sudut;

void setup()
{
  myservo.attach(9);
}

void loop()
{
  sudut = analogRead(A0);
  sudut = map(sudut, 0, 1023, 0, 180);
  myservo.write(sudut);
  delay(15);
}
