#ifndef SOLAR_PANEL_HPP
#define SOLAR_PANEL_HPP

#include "component.hpp"

class SolarPanel : public Component {
public:
  SolarPanel(float initialCurrent);
  float getCurrent() const;
  void setCurrent(float newCurrent);
  void update();
  void regulateCurrent();

private:
  float current;
};

#endif
