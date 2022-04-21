#ifndef CHEESE_HPP
#define CHEESE_HPP

#include <string>

/**
 * @brief interface for cheese
 * 
 */
class Cheese {
public:
    /**
     * @brief Get the Description of cheese
     * 
     * @return std::string 
     */
    virtual std::string getDescription() = 0;
};

#endif // CHEESE_HPP