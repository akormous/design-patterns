#include "MenuItem.hpp"

MenuItem::MenuItem(std::string name, std::string description, bool veg, double price) {
    this->name = name;
    this->description = description;
    this->veg = veg;
    this->price = price;
}

void MenuItem::setName(std::string name) {
    this->name = name;
}

void MenuItem::setDescription(std::string description) {
    this->description = description;
}

void MenuItem::setVegetarian(bool veg) {
    this->veg = veg;
}
void MenuItem::setPrice(double price) {
    this->price = price;
}

std::string MenuItem::getName() {
    return this->name;
}

std::string MenuItem::getDescription() {
    return this->description;
}

bool MenuItem::isVegetarian() {
    return this->veg;
}

double MenuItem::getPrice() {
    return this->price;
}
