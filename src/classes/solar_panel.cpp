#include "solar_panel.hpp"

SolarPanel::SolarPanel(float initialCurrent) : current(initialCurrent) {}

float SolarPanel::getCurrent() const { return current; }

void SolarPanel::setCurrent(float newCurrent) { current = newCurrent; }

void SolarPanel::update() {
  const float MAX_SOLAR_PANEL_CURRENT = 1.0;

  if (current > MAX_SOLAR_PANEL_CURRENT) {
    current = MAX_SOLAR_PANEL_CURRENT;
  }
}

void SolarPanel::regulateCurrent() {
  const float MAX_SOLAR_PANEL_CURRENT = 1.0;

  if (current > MAX_SOLAR_PANEL_CURRENT) {
    current = MAX_SOLAR_PANEL_CURRENT;
  }
}