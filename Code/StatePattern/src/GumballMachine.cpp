#include<iostream>
#include "GumballMachine.hpp"
#include "NoCoinState.hpp"
#include "HasCoinState.hpp"
#include "SoldOutState.hpp"
#include "SoldState.hpp"

using namespace std;

GumballMachine::GumballMachine(int n) {
    this->count = n;
    this->noCoinState = new NoCoinState(this);
    this->soldOutState = new SoldOutState(this);
    this->hasCoinState = new HasCoinState(this);
    this->soldState = new SoldState(this);
    this->curState = soldOutState;
    if(n > 0) {
        this->curState = noCoinState;
    }
}

void GumballMachine::insertCoin() {
    curState->insertCoin();
}
void GumballMachine::ejectCoin() {
    curState->ejectCoin();
}
void GumballMachine::turnCrank() {
    curState->turnCrank();
    curState->dispense();
}
void GumballMachine::releaseBall() {
    cout << "A gumball is rolling out of the slot: ";
    if(count != 0) {
        count = count - 1;
        cout << "Thank you for the purchase!" << endl;
        return;
    }
    cout << "ERROR: Something wrong happened" << endl;
}


// getters
State* GumballMachine::getNoCoinState() {
    return noCoinState;
}
State* GumballMachine::getHasCoinState() {
    return hasCoinState;
}
State* GumballMachine::getSoldOutState() {
    return soldOutState;
}
State* GumballMachine::getSoldState() {
    return soldState;
}

int GumballMachine::getCount() {
    return count;
}
// setters
void GumballMachine::setNoCoinState(State* state) {
    this->noCoinState = state;
}
void GumballMachine::setHasCoinState(State* state) {
    this->hasCoinState = state;
}
void GumballMachine::setSoldOutState(State* state) {
    this->soldOutState = state;
}
void GumballMachine::setSoldState(State* state) {
    this->soldState = state;
}

void GumballMachine::setState(State* state) {
    this->curState = state;
}

void GumballMachine::refill(int n) {
    this->count = this->count + n;
}