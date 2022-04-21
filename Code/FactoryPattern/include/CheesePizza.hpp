#ifndef CHEESE_PIZZA_HPP
#define CHEESE_PIZZA_HPP

#include "Pizza.hpp"
#include "IngredientFactory/PizzaIngredientFactory.hpp"

class CheesePizza : public Pizza {
public:
    CheesePizza(PizzaIngredientFactory* iFactory);
    void prepare();
private:
    PizzaIngredientFactory* ingredientFactory;
};

#endif // CHEESE_PIZZA_HPP