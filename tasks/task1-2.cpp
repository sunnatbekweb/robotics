#include <Arduino.h>

int n = 1;

void setup() {
  Serial.begin(9600);

  pinMode(2, OUTPUT);
}

void loop() {
  Serial.println(n);

  
  if (n == 5) {
    digitalWrite(2, HIGH);
  } else if (n == 10) {
    digitalWrite(2, LOW);
  }
  
  n++;

  if (n == 10) {
    n = 1;
  }

  delay(1000);
}
