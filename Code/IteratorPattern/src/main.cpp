#include<bits/stdc++.h>
#include "DinerMenu.hpp"
#include "PancakeHouseMenu.hpp"
#include "Waitress.hpp"

using namespace std;

int main() {
    DinerMenu* myDiner = new DinerMenu(4); // i want to add 4 items

    myDiner->addItem( MenuItem("Chicken", "nice protein", false, 9.99) );
    myDiner->addItem( MenuItem("Pasta", "italian", true, 6.99) );
    myDiner->addItem( MenuItem("Brocolli", "green stuff", true, 4.99) );
    myDiner->addItem( MenuItem("Egg", "nice protein", false, 3.99) );

    PancakeHouseMenu* myPancakeHouse = new PancakeHouseMenu();

    myPancakeHouse->addItem( MenuItem("Honey", "sweet", true, 14.99) );
    myPancakeHouse->addItem( MenuItem("Swedish", "sweet", true, 11.99) );
    myPancakeHouse->addItem( MenuItem("Chocolate", "sweet", true, 4.99) );
    myPancakeHouse->addItem( MenuItem("Gold", "sweet", true, 54.99) );

    Waitress* w = new Waitress(myDiner, myPancakeHouse);

    w->printMenu();
    return 0;
}