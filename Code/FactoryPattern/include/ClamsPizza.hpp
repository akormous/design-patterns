#ifndef CLAMS_PIZZA_HPP
#define CLAMS_PIZZA_HPP

#include "Pizza.hpp"
#include "IngredientFactory/PizzaIngredientFactory.hpp"

class ClamsPizza : public Pizza {
public:
    ClamsPizza(PizzaIngredientFactory* iFactory);
    void prepare();
private:
    PizzaIngredientFactory* ingredientFactory;
};

#endif // CLAMS_PIZZA_HPP