/**
 * @file PizzaIngredientFactory.hpp
 * @author akormous
 * @brief 
 * @version 0.1
 * @date 2022-04-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#pragma once

#include "Ingredients/Cheese/Cheese.hpp"
#include "Ingredients/Dough/Dough.hpp"
#include "Ingredients/Clams/Clams.hpp"
#include "Ingredients/Sauce/Sauce.hpp"
#include <string>
/**
 * @brief Interface for ingredient factory of various stores
 * 
 */
class PizzaIngredientFactory {
public:
    /**
     * @brief Create a Dough object
     * 
     * @param type type of Dough
     * @return Dough 
     */
    virtual Dough* createDough() = 0;

    /**
     * @brief Create a Sauce object
     * 
     * @param type 
     * @return Sauce 
     */
    virtual Sauce* createSauce() = 0;

    /**
     * @brief Create a Cheese object
     * 
     * @param type 
     * @return Cheese 
     */
    virtual Cheese* createCheese() = 0;

    /**
     * @brief Create a Clams object
     * 
     * @param type 
     * @return Clams 
     */
    virtual Clams* createClams() = 0;

};
