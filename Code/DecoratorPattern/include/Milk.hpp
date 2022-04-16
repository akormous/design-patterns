#ifndef MILK_HPP
#define MILK_HPP

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

#endif // MILK_HPP