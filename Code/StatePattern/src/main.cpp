#include<bits/stdc++.h>
#include "GumballMachine.hpp"

using namespace std;

int main() {
    GumballMachine* myMachine = new GumballMachine(110);

    for(int i = 0; i < 20; i++) {
        myMachine->insertCoin();
        myMachine->turnCrank();
        cout << "-----------------------" << endl;
    }
    return 0;
}