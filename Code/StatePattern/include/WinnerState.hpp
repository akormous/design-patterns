#pragma once
#include "State.hpp"
#include "GumballMachine.hpp"

class WinnerState : public State {
public:
    WinnerState(GumballMachine* gumballMachine);
    void insertCoin();
    void ejectCoin();
    void turnCrank();
    void dispense();
private:
    GumballMachine* gumballMachine;
};