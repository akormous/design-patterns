#include <iostream>
#include "Store/NYPizzaStore.hpp"
#include "Store/ChicagoPizzaStore.hpp"

using namespace std;

int main() {
    NYPizzaStore* ny = new NYPizzaStore();
    ChicagoPizzaStore* chicago = new ChicagoPizzaStore();

    Pizza* p1 = ny->orderPizza("cheessse");
    if(p1 != nullptr) {
        cout << p1->getPizzaDescription() << endl;
        cout << p1->getName() << endl;
    }
    
    Pizza* p2 = chicago->orderPizza("cheese");
    if(p2 != nullptr) {
        cout << p2->getPizzaDescription() << endl;
        cout << p2->getName() << endl;
    }
    
    delete(p1);
    delete(p2);
    delete(ny);
    delete(chicago);
    return 0;
}