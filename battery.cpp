#include "battery.h"

const float MAX_BATTERY_VOLTAGE = 16.0; // Maximum battery voltage in volts
const float MIN_BATTERY_VOLTAGE = 12.0; // Minimum battery voltage in volts

Battery::Battery(float initialVoltage, float initialCurrent) {
  voltage = initialVoltage;
  current = initialCurrent;
}

float Battery::getVoltage() const { return voltage; }

float Battery::getCurrent() const { return current; }

void Battery::setCurrent(float newCurrent) { current = newCurrent; }

void Battery::updateVoltage() {
  voltage += current / 3600;

  if (voltage > MAX_BATTERY_VOLTAGE) {
    voltage = MAX_BATTERY_VOLTAGE;
  }

  if (voltage < MIN_BATTERY_VOLTAGE) {
    voltage = MIN_BATTERY_VOLTAGE;
  }
}