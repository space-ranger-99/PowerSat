#ifndef LOAD_HPP
#define LOAD_HPP

#include "component.hpp"

class Load : public Component {
public:
  Load(float initialCurrent);
  float getCurrent() const;
  void setCurrent(float newCurrent);
  void update();
  void limitCurrent();

private:
  float current;
};

#endif
