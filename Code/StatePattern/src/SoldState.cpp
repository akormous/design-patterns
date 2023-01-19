#include "SoldState.hpp"
#include<iostream>

using namespace std;

SoldState::SoldState(GumballMachine* gumballMachine) {
    this->gumballMachine = gumballMachine;
}

void SoldState::insertCoin() {
    cout << "Please wait, the machine is working to get you a gumball." << endl;
}

void SoldState::ejectCoin() {
    cout << "ERROR: Sorry, You already turned the crank" << endl;
}

void SoldState::turnCrank() {
    cout << "You already turned the crank ..." << endl;
}

void SoldState::dispense() {
    gumballMachine->releaseBall();
    if(gumballMachine->getCount() > 0) {
        gumballMachine->setState(gumballMachine->getNoCoinState());
    }
    else {
        cout << "The machine is out of gumballs!" << endl;
        gumballMachine->setState(gumballMachine->getSoldOutState());
    }
}