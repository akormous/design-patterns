#pragma once
#include "Menu.hpp"
#include "MenuItem.hpp"
#include "PancakeHouseMenuIterator.hpp"
#include<string>
#include<vector>

class PancakeHouseMenu : public Menu {
public:
    PancakeHouseMenu() {}
    ~PancakeHouseMenu() {}

    void addItem(MenuItem item);

    PancakeHouseMenuIterator* createIterator();

private:
    std::vector<MenuItem> menuItems;
    std::string menuDescription;
    int n;
    int cur;
};