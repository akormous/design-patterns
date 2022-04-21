#ifndef SAUCE_HPP
#define SAUCE_HPP

#include <string>

/**
 * @brief interface for SAUCE
 * 
 */
class Sauce {
public:
    /**
     * @brief Get the Description of SAUCE
     * 
     * @return std::string 
     */
    virtual std::string getDescription() = 0;
};

#endif // SAUCE_HPP