#ifndef SOLAR_PANEL_H
#define SOLAR_PANEL_H

class SolarPanel {
public:
  SolarPanel(float initialCurrent);
  float getCurrent() const;
  void setCurrent(float newCurrent);
  void regulateCurrent();

private:
  float current;
};

#endif