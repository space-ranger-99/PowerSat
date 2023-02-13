#ifndef BATTERY_HPP
#define BATTERY_HPP

#include "component.hpp"

class Battery : public Component {
public:
  Battery(float initialVoltage, float initialCurrent);
  float getVoltage() const;
  float getCurrent() const;
  void setCurrent(float newCurrent);
  void update();

private:
  float voltage;
  float current;
};

#endif
