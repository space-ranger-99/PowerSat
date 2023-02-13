#include <iostream>
#include "../src/classes/system.hpp"

int main() {
  Battery battery(12, 0);
  SolarPanel solarPanel(0.5);
  Load load(4);

  System system(battery, solarPanel, load);

  if (battery.getVoltage() != 12) {
    std::cerr << "Error: Battery voltage is not equal to 12\n";
    return 1;
  }

  if (battery.getCurrent() != 0) {
    std::cerr << "Error: Battery current is not equal to 0\n";
    return 1;
  }

  if (solarPanel.getCurrent() != 0.5) {
    std::cerr << "Error: Solar panel current is not equal to 0.5\n";
    return 1;
  }

  if (load.getCurrent() != 4) {
    std::cerr << "Error: Load current is not equal to 4\n";
    return 1;
  }

  system.run(1);
  if (battery.getVoltage() <= 12) {
    std::cerr << "Error: Battery voltage did not increase after run\n";
    return 1;
  }

  if (solarPanel.getCurrent() > 0.5) {
    std::cerr << "Error: Solar panel current is greater than 0.5 after run\n";
    return 1;
  }

  if (load.getCurrent() > 0.5) {
    std::cerr << "Error: Load current is greater than 0.5 after run\n";
    return 1;
  }

  std::cout << "All tests passed\n";
  return 0;
}
