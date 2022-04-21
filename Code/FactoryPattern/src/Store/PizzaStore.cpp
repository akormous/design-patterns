#include "Store/PizzaStore.hpp"

Pizza* PizzaStore::orderPizza(std::string type)  {
    std::cout << "------------------------" << std::endl;
    std::cout << "INITIATED ORDER" << std::endl;

    Pizza* pizza = this->createPizza(type);
    if(pizza != nullptr) {
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
    }

    std::cout << "ORDER COMPLETE" << std::endl;
    std::cout << "------------------------" << std::endl;
    return pizza;
}