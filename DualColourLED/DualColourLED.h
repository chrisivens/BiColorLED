/* Simple Dual colour LED library for Arduino, v1.2 */
#ifndef DualColourLED_H
#define DualColourLED_H 1.1

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class DualColourLED{
  public:
    DualColourLED();
    DualColourLED(uint8_t ledPin1, uint8_t ledPin2);
    void setColour(uint8_t toColour);
    uint8_t getColour();
  private:
    uint8_t colour, pin1, pin2;
};

#endif
