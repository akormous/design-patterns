#include "Store/NYPizzaStore.hpp"

Pizza* NYPizzaStore::createPizza(std::string type) {
    Pizza* pizza = nullptr;
    PizzaIngredientFactory* ingredientFactory = new NYPizzaIngredientFactory();
    if(type == "cheese") {
        pizza = new CheesePizza(ingredientFactory);
        pizza->setName("NY Style Cheese Pizza");
    }
    else if(type == "clams") {
        pizza = new ClamsPizza(ingredientFactory);
        pizza->setName("NY Style Clams Pizza");
    }
    else {
        std::cout << "INVALID CHOICE!" << std::endl;
    }
    return pizza;
}