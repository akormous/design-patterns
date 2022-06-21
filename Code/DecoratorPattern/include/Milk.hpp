#pragma once

#include "CondimentDecorator.hpp"

class Milk : public CondimentDecorator {
public:
    Milk() = delete;
    Milk(Beverage* beverage);
    std::string getDescription();
    double cost();
private:
    Beverage* beverage;
};
