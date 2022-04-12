#include "Duck.hpp"

Duck::Duck() {
}

void Duck::swim() {
    std::cout << "\nSWIMMING\n";
}

void Duck::setFlyBehavior(FlyBehavior* flyBehavior) {
    this->flyBehavior = flyBehavior;
}

void Duck::setQuackBehavior(QuackBehavior* quackBehavior) {
    this->quackBehavior = quackBehavior;
}

void Duck::performFly() {
    this->flyBehavior->fly();
}

void Duck::performQuack() {
    this->quackBehavior->quack();
}