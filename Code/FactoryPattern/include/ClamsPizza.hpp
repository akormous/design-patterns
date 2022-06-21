#pragma once

#include "Pizza.hpp"
#include "IngredientFactory/PizzaIngredientFactory.hpp"

class ClamsPizza : public Pizza {
public:
    ClamsPizza(PizzaIngredientFactory* iFactory);
    void prepare();
private:
    PizzaIngredientFactory* ingredientFactory;
};
