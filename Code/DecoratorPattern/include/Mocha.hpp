#ifndef MOCHA_HPP
#define MOCHA_HPP

#include "CondimentDecorator.hpp"

class Mocha : public CondimentDecorator {
public:
    Mocha() = delete;
    Mocha(Beverage* beverage);
    std::string getDescription();
    double cost();
private:
    Beverage* beverage;
};

#endif // MOCHA_HPP