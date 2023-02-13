#ifndef LOAD_H
#define LOAD_H

class Load {
public:
  Load(float initialCurrent);
  float getCurrent() const;
  void setCurrent(float newCurrent);
  void limitCurrent();

private:
  float current;
};

#endif