#pragma once
#include "Iterator.hpp"
#include "MenuItem.hpp"

class DinerMenuIterator : public Iterator<MenuItem> {
public:
    DinerMenuIterator(MenuItem* menuItems, int n);
    ~DinerMenuIterator();
    bool hasNext();
    MenuItem next();
    void remove(); 
private:
    MenuItem* items;
    int position;
    int n;
};