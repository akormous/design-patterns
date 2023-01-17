#include "MenuItem.hpp"
#include<iostream>

MenuItem::MenuItem(string name, string description, bool vegetarian, double price) {
        this->name = name;
        this->description = description;
        this->vegetarian = vegetarian;
        this->price = price;
}

string MenuItem::getName() {
    return name;
}

string MenuItem::getDescription() {
    return description;
}

bool MenuItem::isVegetarian() {
    return vegetarian;
}

double MenuItem::getPrice() {
    return price;
}

void MenuItem::print() {
    cout << getName();
    if(isVegetarian()) {
        cout << " (v)";
    }
    cout << ", " << getPrice();
    cout << " - " << getDescription() << endl;
}