#include "WinnerState.hpp"
#include<iostream>

using namespace std;

WinnerState::WinnerState(GumballMachine* gumballMachine) {
    this->gumballMachine = gumballMachine;
}

void WinnerState::insertCoin() {
    cout << "Please wait, the machine is working to get you a gumball." << endl;
}

void WinnerState::ejectCoin() {
    cout << "ERROR: Sorry, You already turned the crank" << endl;
}

void WinnerState::turnCrank() {
    cout << "You already turned the crank ..." << endl;
}

void WinnerState::dispense() {
    cout << "You are a lucky winner! You'll get 2 gumballs for your coin.";
    gumballMachine->releaseBall();
    if(gumballMachine->getCount() == 0) {
        gumballMachine->setState(gumballMachine->getSoldOutState());
    }
    else {
        gumballMachine->releaseBall();
        if(gumballMachine->getCount() == 0) {
            gumballMachine->setState(gumballMachine->getSoldOutState());
        }
        else {
            cout << "Whoops, out of gumballs!" << endl;
            gumballMachine->setState(gumballMachine->getNoCoinState());
        }
    }
}