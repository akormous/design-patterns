#pragma once
#include "Menu.hpp"
#include "MenuItem.hpp"
#include "DinerMenuIterator.hpp"
#include<string>

class DinerMenu : public Menu {
public:
    DinerMenu(int n); // n = number of items to put in menu
    ~DinerMenu() {}

    void addItem(MenuItem item);

    DinerMenuIterator* createIterator();

private:
    MenuItem* menuItems;
    std::string menuDescription;
    int n;
    int cur;
};