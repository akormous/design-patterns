#include "Waitress.hpp"
#include<iostream>

Waitress::Waitress(DinerMenu* dinerMenu, PancakeHouseMenu* pancakeMenu) {
    this->dinerMenu = dinerMenu;
    this->pancakeMenu = pancakeMenu;
}

Waitress::~Waitress() {}

void Waitress::printMenu() {
    Iterator<MenuItem>* dinerIt = this->dinerMenu->createIterator();
    Iterator<MenuItem>* pancakeIt = this->pancakeMenu->createIterator();

    std::cout << "Diner Menu" << std::endl;
    printMenu(dinerIt);

    std::cout << "---------------------------" << std::endl;

    std::cout << "Pancake Menu" << std::endl;
    printMenu(pancakeIt);
}

void Waitress::printMenu(Iterator<MenuItem>* it) {
    while(it->hasNext()) {
        MenuItem item = it->next();
        std::cout << item.getName() << "............" << item.getPrice() << std::endl;
    }
}
