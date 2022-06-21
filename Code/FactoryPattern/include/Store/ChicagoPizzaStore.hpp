#pragma once

#include "PizzaStore.hpp"
#include "IngredientFactory/ChicagoPizzaIngredientFactory.hpp"

class ChicagoPizzaStore : public PizzaStore {
public:
    Pizza* createPizza(std::string type);
};
