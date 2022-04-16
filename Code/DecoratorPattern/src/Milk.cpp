#include "Milk.hpp"
#include<iostream>
Milk::Milk(Beverage* beverage) {
    this->beverage = beverage;
}

std::string Milk::getDescription() {
    return this->beverage->getDescription() + ", Milk";
}

double Milk::cost() {
    return 0.75 + this->beverage->cost();
}