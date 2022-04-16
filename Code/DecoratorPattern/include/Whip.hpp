#ifndef WHIP_HPP
#define WHIP_HPP

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

#endif // WHIP_HPP