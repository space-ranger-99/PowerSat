#include <iostream>
#include "system.hpp"
#include "battery.hpp"
#include "solar_panel.hpp"
#include "load.hpp"

System::System(Battery &battery, SolarPanel &solarPanel, Load &load)
    : battery(battery), solarPanel(solarPanel), load(load) {}

void System::run(int numSeconds) {
  std::cout << "Initial state:\n";
  std::cout << "Battery volage = " << battery.getVoltage() << " V\n";
  std::cout << "Battery current = " << battery.getCurrent() << " A\n";
  std::cout << "Solar panel current = " << solarPanel.getCurrent() << " A\n";
  std::cout << "Load voltage = " << load.getCurrent() << " A\n";
  std::cout << "\n";

  for (int i = 0; i < numSeconds; ++i) {
    batteryCharger();
    solarPanelRegulator();
    loadSwitch();
    battery.update();
    solarPanel.update();
    load.update();

    std::cout << "State at time " << i + 1 << " s:\n";
    std::cout << "Battery volage = " << battery.getVoltage() << " V\n";
    std::cout << "Battery current = " << battery.getCurrent() << " A\n";
    std::cout << "Solar panel current = " << solarPanel.getCurrent() << " A\n";
    std::cout << "Load voltage = " << load.getCurrent() << " A\n";
    std::cout << "\n";
  }
}

void System::batteryCharger() {
  if (solarPanel.getCurrent() > 0) {
    battery.setCurrent(solarPanel.getCurrent());
  } else {
    battery.setCurrent(0);
  }
}

void System::solarPanelRegulator() { solarPanel.regulateCurrent(); }

void System::loadSwitch() { load.limitCurrent(); }