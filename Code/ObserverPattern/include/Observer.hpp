#ifndef OBSERVER_INTERFACE_HPP
#define OBSERVER_INTERFACE_HPP

#include "Subject.hpp"

class Subject;
/**
 * Interface for Observers / Subscribers
*/
class Observer {
public:
    virtual ~Observer() {}
    /**
     * Update data in the observer
    */
    virtual void update(Subject* subject) = 0;
};

#endif  // OBSERVER_INTERFACE_HPP