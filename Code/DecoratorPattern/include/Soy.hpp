#ifndef SOY_HPP
#define SOY_HPP

#include "CondimentDecorator.hpp"

class Soy : public CondimentDecorator {
public:
    Soy() = delete;
    Soy(Beverage* beverage);
    std::string getDescription();
    double cost();
private:
    Beverage* beverage;
};

#endif // Soy_HPP