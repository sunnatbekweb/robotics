#include <Arduino.h>
#include <Servo.h>

Servo door;

void setup()
{
  door.attach(9);
  Serial.begin(9600);
}

void loop()
{
  int s = analogRead(A0);
  Serial.println(s);

  if (s > 500) {
    door.write(90);
  } else {
    door.write(0);
  }
  delay(500);
}