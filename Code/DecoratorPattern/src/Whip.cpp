#include "Whip.hpp"

Whip::Whip(Beverage* beverage) {
    this->beverage = beverage;
}

std::string Whip::getDescription() {
    return this->beverage->getDescription() + ", Whip";
}

double Whip::cost() {
    return 0.20 + this->beverage->cost();
}