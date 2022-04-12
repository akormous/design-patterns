#ifndef QUACK_HPP
#define QUACK_HPP

#include "QuackBehavior.hpp"

class Quack : public QuackBehavior {
public:
    void quack() override;
};

#endif // QUACK_HPP