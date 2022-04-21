#ifndef CLAMS_HPP
#define CLAMS_HPP

#include <string>

/**
 * @brief interface for CLAMS
 * 
 */
class Clams {
public:
    /**
     * @brief Get the Description of CLAMS
     * 
     * @return std::string 
     */
    virtual std::string getDescription() = 0;
};

#endif // CLAMS_HPP