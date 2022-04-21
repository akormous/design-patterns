#include "CheesePizza.hpp"

CheesePizza::CheesePizza(PizzaIngredientFactory* iFactory) {
    this->ingredientFactory = iFactory;
}
void CheesePizza::prepare() {
    this->dough = ingredientFactory->createDough();
    this->sauce = ingredientFactory->createSauce();
    this->cheese = ingredientFactory->createCheese();
}