#pragma once

#include "QuackBehavior.hpp"

class MuteQuack : public QuackBehavior {
public:
    void quack() override;
};
