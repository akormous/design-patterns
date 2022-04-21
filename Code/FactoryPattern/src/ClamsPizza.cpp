#include "ClamsPizza.hpp"


ClamsPizza::ClamsPizza(PizzaIngredientFactory* iFactory) {
    this->ingredientFactory = iFactory;
}
void ClamsPizza::prepare() {
    std::cout << "Preparing Pizza " << std::endl;
    this->dough = ingredientFactory->createDough();
    this->sauce = ingredientFactory->createSauce();
    this->clams = ingredientFactory->createClams();
}
