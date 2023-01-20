#pragma once
#include "State.hpp"
#include "GumballMachine.hpp"

class SoldOutState : public State {
public:
    SoldOutState(GumballMachine* gumballMachine);
    void insertCoin();
    void ejectCoin();
    void turnCrank();
    void dispense();
private:
    GumballMachine* gumballMachine;
};