#pragma once
#include "MenuComponent.hpp"
#include <vector>

using namespace std;

class Menu : public MenuComponent {
public:
    Menu(string name, string description);
    ~Menu() {}
    void add(MenuComponent* component);
    void remove(MenuComponent* component);
    MenuComponent* getChild(int i);
    
    string getName();
    string getDescription();
    void print();
private:
    vector<MenuComponent*> menuComponents;
    string name;
    string description;
};