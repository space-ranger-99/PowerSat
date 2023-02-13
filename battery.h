#ifndef BATTERY_H
#define BATTERY_H

class Battery {
public:
  Battery(float initialVoltage, float initialCurrent);
  float getVoltage() const;
  float getCurrent() const;
  void setCurrent(float newCurrent);
  void updateVoltage();

private:
  float voltage;
  float current;
};

#endif