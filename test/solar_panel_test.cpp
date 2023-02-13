#include <iostream>
#include "../src/classes/solar_panel.hpp"

int main() {
  SolarPanel solarPanel(0.5);

  if (solarPanel.getCurrent() != 0.5) {
    std::cerr << "Error: Solar panel current is not equal to 0.5\n";
    return 1;
  }

  solarPanel.setCurrent(1.0);
  if (solarPanel.getCurrent() != 1.0) {
    std::cerr << "Error: Solar panel current is not equal to 1.0\n";
    return 1;
  }

  solarPanel.update();
  if (solarPanel.getCurrent() > 1.0) {
    std::cerr << "Error: Solar panel current is greater than 1.0 after update\n";
    return 1;
  }

  solarPanel.regulateCurrent();
  if (solarPanel.getCurrent() > 1.0) {
    std::cerr << "Error: Solar panel current is greater than 1.0 after regulation\n";
    return 1;
  }

  std::cout << "All tests passed\n";
  return 0;
}
