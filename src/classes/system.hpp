#ifndef SYSTEM_HPP
#define SYSTEM_HPP

#include "battery.hpp"
#include "solar_panel.hpp"
#include "load.hpp"

class System {
public:
  System(Battery &battery, SolarPanel &solarPanel, Load &load);
  void run(int numSeconds);
  void batteryCharger();
  void solarPanelRegulator();
  void loadSwitch();

private:
  Battery &battery;
  SolarPanel &solarPanel;
  Load &load;
};

#endif