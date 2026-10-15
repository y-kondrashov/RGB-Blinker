#include <Arduino.h>

const int ledPin = 5;

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);

  pinMode(ledPin, OUTPUT);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}

// the loop function runs over and over again forever
void loop()
{
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
}