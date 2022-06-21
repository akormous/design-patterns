#pragma once

#include "CondimentDecorator.hpp"

class Whip : public CondimentDecorator {
public:
    Whip() = delete;
    Whip(Beverage* beverage);
    std::string getDescription();
    double cost();
private:
    Beverage* beverage;
};
