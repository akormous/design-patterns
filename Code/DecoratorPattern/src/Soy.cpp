#include "Soy.hpp"

Soy::Soy(Beverage* beverage) {
    this->beverage = beverage;
}

std::string Soy::getDescription() {
    return this->beverage->getDescription() + ", Soy";
}

double Soy::cost() {
    return 5.50 + this->beverage->cost();
}