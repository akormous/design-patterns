#pragma once

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
