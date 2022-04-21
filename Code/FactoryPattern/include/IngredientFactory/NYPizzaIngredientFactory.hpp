#ifndef NY_PIZZA_INGREDIENT_FACTORY_HPP
#define NY_PIZZA_INGREDIENT_FACTORY_HPP

#include "IngredientFactory/PizzaIngredientFactory.hpp"
#include "Ingredients/Dough/ThinCrustDough.hpp"
#include "Ingredients/Sauce/MarinaraTomatoSauce.hpp"
#include "Ingredients/Cheese/ReggianoCheese.hpp"
#include "Ingredients/Clams/FreshClams.hpp"

class NYPizzaIngredientFactory : public PizzaIngredientFactory {
public:
    Dough* createDough();

    Sauce* createSauce();

    Cheese* createCheese();

    Clams* createClams();
};

#endif // NY_PIZZA_INGREDIENT_FACTORY_HPP