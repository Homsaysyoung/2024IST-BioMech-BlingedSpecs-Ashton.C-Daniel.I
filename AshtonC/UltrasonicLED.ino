#include <Arduino.h>
#include "UltrasonicLED.h"

UltrasonicLED myUltrasonicLED(6, 3);

void setup() {
  Serial.begin(9600);
  myUltrasonicLED.initialize();
}

void loop() {
  myUltrasonicLED.process();
}
