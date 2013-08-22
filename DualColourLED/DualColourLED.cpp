/* Simple Dual colour LED library for Arduino, v1.2 */
#include "DualColourLED.h"

DualColourLED::DualColourLED() {
  colour=0;
}

DualColourLED::DualColourLED(uint8_t ledPin1, uint8_t ledPin2) {
  pin1=ledPin1;
  pin2=ledPin2;
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  colour=0;
}

void DualColourLED::setColour(uint8_t toColor) {
  colour=toColor;
  if (colour == 1) { // Red
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
  } else if (colour == 2) { // Green
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
  } else if (colour == 3) { // Yellow
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, HIGH);
  } else { // Black
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
  }
}
uint8_t DualColourLED::getColour() {
  return colour;
}
