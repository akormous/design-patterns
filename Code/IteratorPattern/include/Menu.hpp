#pragma once
#include "Iterator.hpp"
#include "MenuItem.hpp"

class Menu {
public:
    Menu(){};
    virtual ~Menu(){};

    virtual Iterator<MenuItem>* createIterator() = 0;

private:
};