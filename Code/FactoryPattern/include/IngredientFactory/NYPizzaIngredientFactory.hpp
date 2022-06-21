#pragma once

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
