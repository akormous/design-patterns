#pragma once

#include "IngredientFactory/PizzaIngredientFactory.hpp"
#include "Ingredients/Dough/ThickCrustDough.hpp"
#include "Ingredients/Sauce/PlumTomatoSauce.hpp"
#include "Ingredients/Cheese/MozzarellaCheese.hpp"
#include "Ingredients/Clams/FrozenClams.hpp"

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory {
public:
    
    Dough* createDough();

    Sauce* createSauce();

    Cheese* createCheese();

    Clams* createClams();
};
