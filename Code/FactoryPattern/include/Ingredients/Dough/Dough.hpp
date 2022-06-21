#pragma once

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
