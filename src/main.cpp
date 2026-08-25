#include <Arduino.h>

int a = 1;

void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}

void loop()
{
 int s = analogRead(A5);
  Serial.println(s);

  if (s > 900){
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }

  delay(300);
}
