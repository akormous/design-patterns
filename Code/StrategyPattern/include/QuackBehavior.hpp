#ifndef QUACK_BEHAVIOR_HPP
#define QUACK_BEHAVIOR_HPP

#include<iostream>

/**
 * Interface for quack behavior
*/
class QuackBehavior {
public:
    virtual ~QuackBehavior() {}
    /**
     * the sound of duck
    */
    virtual void quack() = 0;
};

#endif // QUACK_BEHAVIOR_HPP