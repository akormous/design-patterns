#pragma once

#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"
#include<iostream>

class FlyBehavior;
class QuackBehavior;

/**
 * Duck base class
*/
class Duck {
public:
    /**
     * Duck virtual destructor
    */
    virtual ~Duck() {};
    /**
     * Duck constructor
    */
    Duck();

    /**
     * display a duck
    */
    virtual void display() {}

    /**
     * ducks can swim
    */
    void swim();

    /**
     * set fly behavior
    */
    void setFlyBehavior(FlyBehavior* flyBehavior);

    /**
     * set quack behavior
    */
    void setQuackBehavior(QuackBehavior* quackBehavior);

    /**
     * ducks can fly?
    */
    void performFly();

    /**
     * quack quack maybe?
    */
    void performQuack();
private:
    FlyBehavior* flyBehavior;
    QuackBehavior* quackBehavior;
};
