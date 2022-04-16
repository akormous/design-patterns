#ifndef ESPRESSO_HPP
#define ESPRESSO_HPP

#include "Beverage.hpp"

class Espresso : public Beverage {
public:
    Espresso();
    double cost();
private:
};

#endif // ESPRESSO_HPP