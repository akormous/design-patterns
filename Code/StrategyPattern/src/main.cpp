#include "MallardDuck.hpp"
#include "RubberDuck.hpp"
#include "FlyWithWings.hpp"
#include "FlyNoWay.hpp"
#include "Quack.hpp"
#include "Squeak.hpp"

using namespace std;

int main() {
    MallardDuck* duck1 = new MallardDuck();
    duck1->setFlyBehavior(new FlyWithWings());
    duck1->setQuackBehavior(new Quack());
    duck1->display();
    duck1->swim();
    duck1->performFly();
    duck1->performQuack();

    std::cout << "\n---------------------------\n";

    RubberDuck* duck2 = new RubberDuck();
    duck2->setFlyBehavior(new FlyNoWay());
    duck2->setQuackBehavior(new Squeak());
    duck2->display();
    duck2->swim();
    duck2->performFly();
    duck2->performQuack();

    delete(duck1);
    delete(duck2);
    return 0;
}