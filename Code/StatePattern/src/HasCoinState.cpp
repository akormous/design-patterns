#include "HasCoinState.hpp"
#include<iostream>

using namespace std;

HasCoinState::HasCoinState(GumballMachine* gumballMachine) {
    this->gumballMachine = gumballMachine;
}

void HasCoinState::insertCoin() {
    cout << "ERROR: You have already inserted a coin!" << endl;
}

void HasCoinState::ejectCoin() {
    cout << "Coin rolling out!" << endl;
    gumballMachine->setState(gumballMachine->getNoCoinState());
}

void HasCoinState::turnCrank() {
    cout << "You turned the crank ..." << endl;
    gumballMachine->setState(gumballMachine->getSoldState());
}

void HasCoinState::dispense() {
    cout << "ERROR: You need to turn the crank to get your gumball." << endl;
}