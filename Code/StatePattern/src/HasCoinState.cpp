#include "HasCoinState.hpp"
#include<iostream>
#include<time.h>
#include<cstdlib>

using namespace std;

HasCoinState::HasCoinState(GumballMachine* gumballMachine) {
    this->gumballMachine = gumballMachine;
    srand(time(0));
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
    int winner = rand()%10; // get a random number from 1 to 10
    if(winner == 0) {
        gumballMachine->setState(gumballMachine->getWinnerState());
    }
    else {
        gumballMachine->setState(gumballMachine->getSoldState());
    }
}

void HasCoinState::dispense() {
    cout << "ERROR: You need to turn the crank to get your gumball." << endl;
}