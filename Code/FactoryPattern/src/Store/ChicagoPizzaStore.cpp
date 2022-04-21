#include "Store/ChicagoPizzaStore.hpp"

Pizza* ChicagoPizzaStore::createPizza(std::string type) {
    Pizza* pizza = nullptr;
    PizzaIngredientFactory* ingredientFactory = new ChicagoPizzaIngredientFactory();

    if(type == "cheese") {
        pizza = new CheesePizza(ingredientFactory);
        pizza->setName("Chicago Style Cheese Pizza");
    }
    else if (type == "clams") {
        pizza = new ClamsPizza(ingredientFactory);
        pizza->setName("Chicago Style Clams Pizza");
    }
    else {
        std::cout << "INVALID CHOICE!" << std::endl;
    }
    return pizza;
}