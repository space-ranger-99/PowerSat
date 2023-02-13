#include "../include/battery.hpp"

Battery::Battery(float initialVoltage, float initialCurrent)
    : voltage(initialVoltage), current(initialCurrent) {}

float Battery::getVoltage() const { return voltage; }

float Battery::getCurrent() const { return current; }

void Battery::setCurrent(float newCurrent) { current = newCurrent; }

void Battery::update() {
  const float MAX_BATTERY_VOLTAGE = 16.0;
  const float MIN_BATTERY_VOLTAGE = 12.0;

  voltage += current / 3600;

  if (voltage > MAX_BATTERY_VOLTAGE) {
    voltage = MAX_BATTERY_VOLTAGE;
  }

  if (voltage < MIN_BATTERY_VOLTAGE) {
    voltage = MIN_BATTERY_VOLTAGE;
  }
}