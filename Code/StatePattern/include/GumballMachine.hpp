#pragma once
#include "State.hpp"

class GumballMachine {
public:
    GumballMachine(int n);

    void insertCoin();
    void ejectCoin();
    void turnCrank();
    void releaseBall();
    

    // getters
    State* getNoCoinState();
    State* getHasCoinState();
    State* getSoldOutState();
    State* getSoldState();
    State* getWinnerState();

    int getCount();

    // setters
    void setNoCoinState(State* state);
    void setHasCoinState(State* state);
    void setSoldOutState(State* state);
    void setSoldState(State* state);
    void setWinnerState(State* state);

    void setState(State* state);

    void refill(int n);
private:
    int count;  // number of gumballs
    State* noCoinState;
    State* hasCoinState;
    State* soldOutState;
    State* soldState;
    State* winnerState;

    State* curState;
};