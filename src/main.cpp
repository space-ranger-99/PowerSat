#include "classes/battery.hpp"
#include "classes/solar_panel.hpp"
#include "classes/load.hpp"
#include "classes/system.hpp"

int main() {
  Battery battery(12, 0);
  SolarPanel solarPanel(0.5);
  Load load(4);

  System system(battery, solarPanel, load);
  system.run(10);

  return 0;
}