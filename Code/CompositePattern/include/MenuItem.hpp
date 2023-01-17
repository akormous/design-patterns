#pragma once
#include "MenuComponent.hpp"

using namespace std;

/*
Leaf
*/
class MenuItem : public MenuComponent {
public:

    MenuItem(string name, string description, bool vegetarian, double price);
    ~MenuItem() {}
    string getName();
    string getDescription();
    bool isVegetarian();
    double getPrice();
    void print();

private:
    string name;
    string description;
    bool vegetarian;
    double price;
};