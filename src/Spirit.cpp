#include "Spirit.h"

Spirit::Spirit(int _health ,int _power ,int _defense)
{
    health = _health;
    power = _power;
    defense = _defense;
}

Spirit::~Spirit()
{
    delete this;
}
