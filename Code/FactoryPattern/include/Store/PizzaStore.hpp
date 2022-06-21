#pragma once

#include "Pizza.hpp"
#include "IngredientFactory/PizzaIngredientFactory.hpp"
#include "CheesePizza.hpp"
#include "ClamsPizza.hpp"

class PizzaStore {
public:
    virtual Pizza* createPizza(std::string type) {  return nullptr; }

    Pizza* orderPizza(std::string type);

};
