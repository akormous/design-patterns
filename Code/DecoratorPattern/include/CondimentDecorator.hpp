#pragma once

#include "Beverage.hpp"

class CondimentDecorator : public Beverage {
public:
    virtual std::string getDescription() { return ""; }
    virtual ~CondimentDecorator() {}
private:
};
