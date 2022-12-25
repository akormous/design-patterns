#pragma once
#include "CaffeineBeverage.hpp"

class Coffee : public CaffeineBeverage {
public:
    Coffee();

    void brew();
    void addCondiments();


private:
};