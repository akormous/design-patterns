#include "Menu.hpp"
#include<iostream>
#include<algorithm>

using namespace std;

Menu::Menu(string name, string description) {
    this->name = name;
    this->description = description;
}

void Menu::add(MenuComponent* component) {
    this->menuComponents.push_back(component);
}

void Menu::remove(MenuComponent* component) {
    vector<MenuComponent*>::iterator it = std::find(menuComponents.begin(), menuComponents.end(), component);
    if(it != menuComponents.end()) {
        menuComponents.erase(it);
    }
}

MenuComponent* Menu::getChild(int i) {
    return this->menuComponents[i];
}

string Menu::getName() {
    return name;
}

string Menu::getDescription() {
    return description;
}

void Menu::print() {
    cout << "------------------------------" << endl;
    cout << name << " - " << description << endl;
    cout << "------------------------------" << endl;
    for(auto it = menuComponents.begin(); it != menuComponents.end(); it++) {
        (*it)->print();
    }
}