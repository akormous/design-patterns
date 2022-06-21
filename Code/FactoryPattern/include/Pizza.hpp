#pragma once

#include "Ingredients/Dough/Dough.hpp"
#include "Ingredients/Sauce/Sauce.hpp"
#include "Ingredients/Clams/Clams.hpp"
#include "Ingredients/Cheese/Cheese.hpp"

#include <iostream>

class Pizza {
public:
    Pizza();
    virtual ~Pizza() {}
    virtual void prepare() {}

    void bake();
    void cut();
    void box();
    void setName(std::string iname);
    std::string getName();
    std::string getPizzaDescription();
protected:
    std::string name;
    Dough* dough;
    Sauce* sauce;
    Clams* clams;
    Cheese* cheese;

};
