#ifndef NY_PIZZA_STORE_HPP
#define NY_PIZZA_STORE_HPP

#include "PizzaStore.hpp"
#include "IngredientFactory/NYPizzaIngredientFactory.hpp"

class NYPizzaStore : public PizzaStore {
public:
    Pizza* createPizza(std::string type);
};

#endif // NY_PIZZA_STORE_HPP