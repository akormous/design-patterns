#pragma once

#include "Pizza.hpp"
#include "IngredientFactory/PizzaIngredientFactory.hpp"

class CheesePizza : public Pizza {
public:
    CheesePizza(PizzaIngredientFactory* iFactory);
    void prepare();
private:
    PizzaIngredientFactory* ingredientFactory;
};
