#include<bits/stdc++.h>
#include "Menu.hpp"
#include "MenuItem.hpp"

using namespace std;


int main() {
    Menu* dinerMenu = new Menu("Diner", "Delicious as always");
    
    Menu* dinerSubMenu = new Menu("Diwali Special", "Celebrate the festival with great taste");
    dinerSubMenu->add(new MenuItem("Paneer Tikka", "very nice", true, 3.99));
    dinerSubMenu->add(new MenuItem("Chole Bhature", "very nice", true, 7.99));
    dinerSubMenu->add(new MenuItem("Deluxe Thali", "very nice", true, 12.99));
    dinerSubMenu->add(new MenuItem("Malai Chaap", "very nice", true, 6.99));
    

    dinerMenu->add(new MenuItem("Chicken 69", "the best we got", false, 9.99));
    dinerMenu->add(new MenuItem("Fish and Rice", "good ol' fish and rice", false, 16.99));
    dinerMenu->add(dinerSubMenu);


    dinerMenu->print();

    cout << "-------------------------" << endl;
    cout << "DELETING SUB MENU" << endl;
    cout << "-------------------------" << endl;

    dinerMenu->remove(dinerSubMenu);
    
    dinerMenu->print();
    return 0;
}