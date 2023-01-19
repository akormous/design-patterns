#include "NoCoinState.hpp"
#include<iostream>

using namespace std;

NoCoinState::NoCoinState(GumballMachine* gumballMachine) {
    this->gumballMachine = gumballMachine;
}

void NoCoinState::insertCoin() {
    cout << "Inserted a coin!" << endl;
    gumballMachine->setState(gumballMachine->getHasCoinState());
}

void NoCoinState::ejectCoin() {
    cout << "ERROR: You haven't inserted any coin." << endl;
}

void NoCoinState::turnCrank() {
    cout << "ERROR: You turned but haven't inserted any coin." << endl;
}

void NoCoinState::dispense() {
    cout << "ERROR: You need to pay first." << endl;
}