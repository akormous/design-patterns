#pragma once
#include "State.hpp"
#include "GumballMachine.hpp"

class NoCoinState : public State {
public:
    NoCoinState(GumballMachine* gumballMachine);
    void insertCoin();
    void ejectCoin();
    void turnCrank();
    void dispense();
private:
    GumballMachine* gumballMachine;
};