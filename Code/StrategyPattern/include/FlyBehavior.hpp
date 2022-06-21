#pragma once

#include<iostream>
/**
 * Interface for Flying behavior of a duck
*/
class FlyBehavior {
public:
    virtual ~FlyBehavior() {}
    /**
     * way of flying
    */
    virtual void fly() = 0;
};