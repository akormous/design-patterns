#ifndef SUBJECT_INTERFACE_HPP
#define SUBJECT_INTERFACE_HPP

#include "Observer.hpp"

class Observer;
/**
 * Interface for the Subject / Publisher
*/
class Subject {
public:
    /**
     * Register an observer
     * @param observer object that needs to be registered
    */
    virtual void registerObserver(Observer* observer) = 0;

    /**
     * Unregister an observer
     * @param observer object that needs to be unregistered
    */
    virtual void removeObserver(Observer* observer) = 0;

    /**
     * Notify all observers
    */
    virtual void notify() = 0;
};

#endif  // SUBJECT_INTERFACE_HPP