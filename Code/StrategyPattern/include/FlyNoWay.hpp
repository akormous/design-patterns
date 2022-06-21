#pragma once

#include "FlyBehavior.hpp"

class FlyNoWay : public FlyBehavior {
public:
    void fly() override;
};