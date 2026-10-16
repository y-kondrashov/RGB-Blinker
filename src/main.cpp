#include <Arduino.h>

const int ledPin_Red = 4;
const int ledPin_Blue = 5;

void setup() {
  pinMode(ledPin_Red, OUTPUT);
  pinMode(ledPin_Blue, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
  digitalWrite(ledPin_Red, HIGH);
  delay(300);
  digitalWrite(ledPin_Red, LOW);
  printf("Red\n");
  digitalWrite(ledPin_Blue, HIGH);
  delay(300);
  digitalWrite(ledPin_Blue, LOW);
  printf("Blue\n");
}