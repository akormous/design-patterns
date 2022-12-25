#pragma once
#include<iostream>

class CaffeineBeverage {
public:
    void boilWater() {
        std::cout << "Boiling Water" << std::endl;
    }
    void pourInCup() {
        std::cout << "Pouring in Cup" << std::endl;
    }
    
    virtual void brew() = 0;
    virtual void addCondiments() = 0;

    bool customerWantsCondiments() {
        return true;
    }

    void prepareRecipe() {
        std::cout << "-------------------------" << std::endl;
        std::cout << "PREPARING RECIPE" << std::endl;
        std::cout << "-------------------------" << std::endl;

        boilWater();
        pourInCup();
        brew();
        if(customerWantsCondiments()) {
            addCondiments();
        }
        std::cout << "-------------------------" << std::endl;

    }
    
private:
};