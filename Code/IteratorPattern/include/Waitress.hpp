#pragma once
#include "Iterator.hpp"
#include "DinerMenu.hpp"
#include "PancakeHouseMenu.hpp"

class Waitress {
public:
    Waitress(DinerMenu* dinerMenu, PancakeHouseMenu* pancakeMenu);
    ~Waitress();

    void printMenu();

    // other waitress methods
private:
    DinerMenu* dinerMenu;
    PancakeHouseMenu* pancakeMenu;
    void printMenu(Iterator<MenuItem>* it);
};