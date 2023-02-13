#include <iostream>
#include "../src/classes/battery.hpp"

int main() {
  Battery battery(12, 0);

  if (battery.getVoltage() != 12) {
    std::cerr << "Error: Battery voltage is not equal to 12\n";
    return 1;
  }

  if (battery.getCurrent() != 0) {
    std::cerr << "Error: Battery current is not equal to 0\n";
    return 1;
  }

  battery.setCurrent(0.5);
  if (battery.getCurrent() != 0.5) {
    std::cerr << "Error: Battery current is not equal to 0.5\n";
    return 1;
  }

  battery.update();
  if (battery.getVoltage() <= 12) {
    std::cerr << "Error: Battery voltage did not increase after update\n";
    return 1;
  }

  std::cout << "All tests passed\n";
  return 0;
}
