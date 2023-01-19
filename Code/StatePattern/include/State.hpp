#pragma once

class State {
public:
    virtual void insertCoin() = 0;
    virtual void ejectCoin() = 0;
    virtual void turnCrank() = 0;
    virtual void dispense() = 0;
};