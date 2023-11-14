#ifndef UltrasonicLED_H
#define UltrasonicLED_H

#include "Arduino.h"

class UltrasonicLED {
public:
  UltrasonicLED(int trigPin, int ledPin);
  void initialize();
  void process();
  void adjustLED();
  unsigned long readUS();

private:
  int trigPin;
  int ledPin;
};

#endif

UltrasonicLED.cpp
#include "UltrasonicLED.h"

UltrasonicLED::UltrasonicLED(int trigPin, int ledPin) {
  this->trigPin = trigPin;
  this->ledPin = ledPin;
}

void UltrasonicLED::initialize() {
  pinMode(trigPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  myUltrasonic.initialize();
}

void UltrasonicLED::process() {
  adjustLED();
}

