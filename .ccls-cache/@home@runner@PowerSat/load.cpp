#include "load.h"

const float MAX_LOAD_CURRENT = 0.5; // Maximum load currenn in amps

Load::Load(float initialCurrent)
{
    current = initialCurrent;
}

float Load::getCurrent() const
{
    return current;
}

void Load::setCurrent(float newCurrent)
{
    current = newCurrent;
}

void Load::limitCurrent()
{
    if (current > MAX_LOAD_CURRENT)
    {
        current = MAX_LOAD_CURRENT;
    }
}