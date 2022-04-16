// beverages
#include "DarkRoast.hpp"
#include "Espresso.hpp"
#include "HouseBlend.hpp"
#include "Decaf.hpp"

// condiments
#include "Milk.hpp"
#include "Mocha.hpp"
#include "Soy.hpp"
#include "Whip.hpp"

#include<bits/stdc++.h>
using namespace std;

int main() {
    
    // double mocha triple soy dark roast
    Beverage* b = new DarkRoast();
    b = new Soy(b);
    b = new Soy(b);
    b = new Soy(b);

    b = new Mocha(b);
    b = new Mocha(b);

    cout << b->getDescription() << endl;
    cout << "$ " << b->cost() << endl;

    delete(b);
}