#include <Arduino.h>
#include "UltrasonicLED.h"

void UltrasonicLED::adjustLED() {
  int brightness = map(readUS(), 5, 100, 0, 255);
  analogWrite(ledPin, brightness);
}

unsigned long UltrasonicLED::readUS() {
  unsigned long rangeInCM = myUltrasonic.MeasureInCentimeters();
  Serial.println(rangeInCM);
  return rangeInCM;
}
