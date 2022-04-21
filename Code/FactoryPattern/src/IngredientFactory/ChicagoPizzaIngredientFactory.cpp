#include "IngredientFactory/ChicagoPizzaIngredientFactory.hpp"

Dough* ChicagoPizzaIngredientFactory::createDough() {
    return new ThickCrustDough();
}

Sauce* ChicagoPizzaIngredientFactory::createSauce() {
    return new PlumTomatoSauce();
}

Cheese* ChicagoPizzaIngredientFactory::createCheese() {
    return new MozzarellaCheese();
}

Clams* ChicagoPizzaIngredientFactory::createClams() {
    return new FrozenClams();
}