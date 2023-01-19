#pragma once
#include "State.hpp"
#include "GumballMachine.hpp"

class SoldState : public State {
public:
    SoldState(GumballMachine* gumballMachine);
    void insertCoin();
    void ejectCoin();
    void turnCrank();
    void dispense();
private:
    GumballMachine* gumballMachine;
};