#include "SoldOutState.hpp"
#include<iostream>

using namespace std;

SoldOutState::SoldOutState(GumballMachine* gumballMachine) {
    this->gumballMachine = gumballMachine;
}

void SoldOutState::insertCoin() {
    cout << "ERROR: The machine is out of gumballs!" << endl;
}

void SoldOutState::ejectCoin() {
    cout << "ERROR: Sorry, the machine is out of gumballs, also you haven't inserted any coin." << endl;
}

void SoldOutState::turnCrank() {
    cout << "ERROR: The machine is out of gumballs!" << endl;
}

void SoldOutState::dispense() {
    cout << "ERROR: The machine is out of gumballs!" << endl;
}