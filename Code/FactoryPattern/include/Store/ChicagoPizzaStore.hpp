#ifndef CHICAGO_PIZZA_STORE_HPP
#define CHICAGO_PIZZA_STORE_HPP

#include "PizzaStore.hpp"
#include "IngredientFactory/ChicagoPizzaIngredientFactory.hpp"

class ChicagoPizzaStore : public PizzaStore {
public:
    Pizza* createPizza(std::string type);
};

#endif // CHICAGO_PIZZA_STORE_HPP