#pragma once

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
