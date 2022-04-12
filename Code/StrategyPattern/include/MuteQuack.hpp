#ifndef MUTE_QUACK_HPP
#define MUTE_QUACK_HPP

#include "QuackBehavior.hpp"

class MuteQuack : public QuackBehavior {
public:
    void quack() override;
};

#endif // MUTE_QUACK_HPP