#ifndef CONDIMENT_DECORATOR_HPP
#define CONDIMENT_DECORATOR_HPP

#include "Beverage.hpp"

class CondimentDecorator : public Beverage {
public:
    virtual std::string getDescription() { return ""; }
    virtual ~CondimentDecorator() {}
private:
};

#endif // CONDIMENT_DECORATOR_HPP