#ifndef FLY_BEHAVIOR_HPP
#define FLY_BEHAVIOR_HPP

#include<iostream>
/**
 * Interface for Flying behavior of a duck
*/
class FlyBehavior {
public:
    /**
     * way of flying
    */
    virtual void fly() = 0;
};

#endif // FLY_BEHAVIOR_HPP