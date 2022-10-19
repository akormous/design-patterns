#include<bits/stdc++.h>
#include "Remote.hpp"
#include "Vendors/Light.hpp"
#include "Vendors/LivingRoomTV.hpp"
#include "ConcreteCommands/LightOnCommand.hpp"
#include "ConcreteCommands/LightOffCommand.hpp"
#include "ConcreteCommands/LivingRoomTVOnCommand.hpp"
#include "ConcreteCommands/LivingRoomTVOffCommand.hpp"

using namespace std;

int main() {
    /*
    SETUP
    */
    Remote* myRemote = new Remote(10);

    // light commands
    Light* light = new Light();
    LightOnCommand* lightOn = new LightOnCommand(light);
    LightOffCommand* lightOff = new LightOffCommand(light);

    // tv commands
    LivingRoomTV* tv = new LivingRoomTV();
    LivingRoomTVOnCommand* tvOn = new LivingRoomTVOnCommand(tv);
    LivingRoomTVOffCommand* tvOff = new LivingRoomTVOffCommand(tv);

    myRemote->setCommand(0, lightOn, lightOff);
    myRemote->setCommand(1, tvOn, tvOff);

    /*
    MAKING CALLS
    */
    myRemote->displayMenu();
    cout << endl;
    myRemote->onButtonWasPushed(0);
    myRemote->onButtonWasPushed(1);
    myRemote->undoButtonWasPushed();
    myRemote->offButtonWasPushed(0);
    myRemote->offButtonWasPushed(1);
    myRemote->undoButtonWasPushed();
    delete(myRemote);
    return 0;
}