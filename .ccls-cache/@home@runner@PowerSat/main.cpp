#include "battery.h"
#include "load.h"
#include "solar_panel.h"
#include <iostream>

// Define modules
void batteryCharger(Battery &battery, SolarPanel &solarPanel) {
  if (solarPanel.getCurrent() > 0) {
    battery.setCurrent(solarPanel.getCurrent());
  } else {
    battery.setCurrent(0);
  }

  battery.updateVoltage();
}

void solarPanelRegulator(SolarPanel &solarPanel) {
  solarPanel.regulateCurrent();
}

void loadSwitch(Load &load) { load.limitCurrent(); }

// Main control loop
int main() {
  Battery battery(12, 0);
  SolarPanel solarPanel(0.5);
  Load load(4);

  std::cout << "Initial state:\n";
  std::cout << "Battery volage = " << battery.getVoltage() << " V\n";
  std::cout << "Battery current = " << battery.getCurrent() << " A\n";
  std::cout << "Solar panel current = " << solarPanel.getCurrent() << " A\n";
  std::cout << "Load voltage = " << load.getCurrent() << " A\n";
  std::cout << "\n";

  // Run control loop for 10 seconds
  for (int i = 0; i < 10; ++i) {
    // Update battery and solar panel
    batteryCharger(battery, solarPanel);
    solarPanelRegulator(solarPanel);

    // Update load
    loadSwitch(load);

    // Print state
    std::cout << "State at time " << i + 1 << " s:\n";
    std::cout << "Battery volage = " << battery.getVoltage() << " V\n";
    std::cout << "Battery current = " << battery.getCurrent() << " A\n";
    std::cout << "Solar panel current = " << solarPanel.getCurrent() << " A\n";
    std::cout << "Load voltage = " << load.getCurrent() << " A\n";
    std::cout << "\n";
  }

  return 0;
}