#include "Mocha.hpp"

Mocha::Mocha(Beverage* beverage) {
    this->beverage = beverage;
}

std::string Mocha::getDescription() {
    return this->beverage->getDescription() + ", Mocha";
}

double Mocha::cost() {
    return 0.50 + this->beverage->cost();
}