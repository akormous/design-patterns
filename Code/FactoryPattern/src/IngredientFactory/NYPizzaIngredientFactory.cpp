#include "IngredientFactory/NYPizzaIngredientFactory.hpp"

Dough* NYPizzaIngredientFactory::createDough() {
    return new ThinCrustDough();
}

Sauce* NYPizzaIngredientFactory::createSauce() {
    return new MarinaraTomatoSauce();
}

Cheese* NYPizzaIngredientFactory::createCheese() {
    return new ReggianoCheese();
}

Clams* NYPizzaIngredientFactory::createClams() {
    return new FreshClams();
}