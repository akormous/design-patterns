#include "PancakeHouseMenu.hpp"

void PancakeHouseMenu::addItem(MenuItem item) {
    this->menuItems.push_back(item);
}

PancakeHouseMenuIterator* PancakeHouseMenu::createIterator() {
    return (new PancakeHouseMenuIterator(this->menuItems));
}