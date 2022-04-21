#ifndef DOUGH_HPP
#define DOUGH_HPP

#include <string>

/**
 * @brief interface for DOUGH
 * 
 */
class Dough {
public:
    /**
     * @brief Get the Description of DOUGH
     * 
     * @return std::string 
     */
    virtual std::string getDescription() = 0;
};

#endif // DOUGH_HPP