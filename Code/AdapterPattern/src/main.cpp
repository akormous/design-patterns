#include "MallardDuck.hpp"
#include "WildTurkey.hpp"
#include "TurkeyObjectAdapter.hpp"
#include<bits/stdc++.h>

using namespace std;


void DemoObjectAdapter() {
    cout << "DEMO - Object Adapter " << endl;
    // create a new duck
    MallardDuck* myDuck = new MallardDuck();
    
    // create a new turkey
    WildTurkey* myTurkey = new WildTurkey();
    
    // adapt this new turkey to a duck
    TurkeyObjectAdapter* turkeyAdapter = new TurkeyObjectAdapter(myTurkey);

    // a list of ducks
    vector<Duck*> ducks;
    ducks.push_back(myDuck);
    ducks.push_back(turkeyAdapter);

    for(auto d : ducks) {
        d->fly();
        d->quack();
    }

    delete(turkeyAdapter);
    delete(myTurkey);
    delete(myDuck);
}

void DemoClassAdapter() {

}

int main() {
    DemoObjectAdapter();
    return 0;
}