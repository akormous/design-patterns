#include<bits/stdc++.h>
#include "GumballMachine.hpp"

using namespace std;

int main() {
    GumballMachine* myMachine = new GumballMachine(10);

    myMachine->insertCoin();
    myMachine->insertCoin();

    myMachine->ejectCoin();
    myMachine->turnCrank();

    myMachine->insertCoin();
    myMachine->turnCrank();

    myMachine->turnCrank();
    
    myMachine->ejectCoin();
    return 0;
}