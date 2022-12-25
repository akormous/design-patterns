#include "Tea.hpp"
#include "Coffee.hpp"
#include<bits/stdc++.h>

using namespace std;

int main() {
    CaffeineBeverage* cuttingChai = new Tea();
    cuttingChai->prepareRecipe();
    delete cuttingChai;

    CaffeineBeverage* spclCoffee = new Coffee();
    spclCoffee->prepareRecipe();
    delete spclCoffee;
    return 0;
}