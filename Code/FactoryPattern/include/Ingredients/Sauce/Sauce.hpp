#pragma once

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
