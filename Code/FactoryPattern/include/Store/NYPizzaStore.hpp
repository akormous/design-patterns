#pragma once

#include "PizzaStore.hpp"
#include "IngredientFactory/NYPizzaIngredientFactory.hpp"

class NYPizzaStore : public PizzaStore {
public:
    Pizza* createPizza(std::string type);
};
