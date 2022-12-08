#pragma once
#include "Duck.hpp"
#include "Turkey.hpp"

class TurkeyObjectAdapter : public Duck {
public:
    TurkeyObjectAdapter(Turkey* turkey);
    void fly();
    void quack();
private:
    Turkey* turkey;
};