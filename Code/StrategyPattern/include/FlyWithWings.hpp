#ifndef FLY_WITH_WINGS_HPP
#define FLY_WITH_WINGS_HPP

#include "FlyBehavior.hpp"

class FlyWithWings : public FlyBehavior {
public:
    void fly() override;
};

#endif // FLY_WITH_WINGS_HPP