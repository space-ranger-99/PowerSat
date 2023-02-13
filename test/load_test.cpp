#include <iostream>
#include "../src/classes/load.hpp"

int main() {
  Load load(0.5);

  if (load.getCurrent() != 0.5) {
    std::cerr << "Error: Load current is not equal to 0.5\n";
    return 1;
  }

  load.setCurrent(1.0);
  if (load.getCurrent() != 1.0) {
    std::cerr << "Error: Load current is not equal to 1.0\n";
    return 1;
  }

  load.update();
  if (load.getCurrent() > 0.5) {
    std::cerr << "Error: Load current is greater than 0.5 after update\n";
    return 1;
  }

  load.limitCurrent();
  if (load.getCurrent() > 0.5) {
    std::cerr << "Error: Load current is greater than 0.5 after limiting\n";
    return 1;
  }

  std::cout << "All tests passed\n";
  return 0;
}
