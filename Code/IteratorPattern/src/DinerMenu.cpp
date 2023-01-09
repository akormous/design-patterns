#include "DinerMenu.hpp"
#include "DinerMenuIterator.hpp"
#include <iostream>

DinerMenu::DinerMenu(int n) {
    this->n = n;
    menuItems = new MenuItem[n];
    this->cur = 0;
}

DinerMenuIterator* DinerMenu::createIterator() {
    return (new DinerMenuIterator(this->menuItems, this->n));
}

void DinerMenu::addItem(MenuItem item) {
    if(cur >= n) {
        std::cout << "Menu overflow! Cannot add more items." << std::endl; 
        return;
    }
    this->menuItems[cur] = item;
    cur++;
}