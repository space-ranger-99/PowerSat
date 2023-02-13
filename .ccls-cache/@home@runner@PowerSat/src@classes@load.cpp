#include "load.hpp"

Load::Load(float initialCurrent) : current(initialCurrent) {}

float Load::getCurrent() const { return current; }

void Load::setCurrent(float newCurrent) { current = newCurrent; }

void Load::update() {
  const float MAX_LOAD_CURRENT = 0.5;

  if (current > MAX_LOAD_CURRENT) {
    current = MAX_LOAD_CURRENT;
  }
}

void Load::limitCurrent() {
  const float MAX_LOAD_CURRENT = 0.5;

  if (current > MAX_LOAD_CURRENT) {
    current = MAX_LOAD_CURRENT;
  }
}