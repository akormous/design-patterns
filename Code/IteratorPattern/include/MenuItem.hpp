#pragma once
#include <string>
class MenuItem {
public:
    MenuItem() {}
    MenuItem(std::string name, std::string description, bool veg, double price);
    ~MenuItem() {}

    void setName(std::string name);
    void setDescription(std::string description);
    void setVegetarian(bool isVegetarian);
    void setPrice(double price);
    std::string getName();
    std::string getDescription();
    bool isVegetarian();
    double getPrice();
private:
    std::string name;
    std::string description;
    bool veg;
    double price;
};