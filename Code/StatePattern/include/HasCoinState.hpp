#pragma once
#include "State.hpp"
#include "GumballMachine.hpp"

class HasCoinState : public State {
public:
    HasCoinState(GumballMachine* gumballMachine);
    void insertCoin();
    void ejectCoin();
    void turnCrank();
    void dispense();
private:
    GumballMachine* gumballMachine;
};