#include "solar_panel.h"

const float MAX_SOLAR_PANEL_CURRENT = 1.0; // Maximum solar panel current

SolarPanel::SolarPanel(float initialCurrent) { current = initialCurrent; }

float SolarPanel::getCurrent() const { return current; }

void SolarPanel::setCurrent(float newCurrent) { current = newCurrent; }

void SolarPanel::regulateCurrent() {
  if (current > MAX_SOLAR_PANEL_CURRENT) {
    current = MAX_SOLAR_PANEL_CURRENT;
  }
}