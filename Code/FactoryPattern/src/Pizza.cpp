#include "Pizza.hpp"
#include <iostream>

Pizza::Pizza() : dough(nullptr), sauce(nullptr), cheese(nullptr), clams(nullptr) {
}

void Pizza::bake() {
    std::cout << "Baking for 30 min at 475 F" << std::endl;
}
void Pizza::cut() {
    std::cout << "Cutting in 6 slices" << std::endl;
}
void Pizza::box() {
    std::cout << "Putting Pizza in a Box" << std::endl;
}
void Pizza::setName(std::string iname) {
    this->name = iname;
}
std::string Pizza::getName() {
    return this->name;
}

std::string Pizza::getPizzaDescription() {
    std::string desc = "DESCRIPTION:\n" 
                    + this->dough->getDescription() + "\n"
                    + (this->sauce ? this->sauce->getDescription() + "\n" : "") 
                    + (this->cheese ? this->cheese->getDescription() + "\n" : "")
                    + (this->clams ? this->clams->getDescription() + "\n" : "") ;
    return desc;
}