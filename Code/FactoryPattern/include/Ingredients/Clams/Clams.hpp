#pragma once

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
