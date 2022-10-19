#pragma once
#include "Command.hpp"
#include "Vendors/LivingRoomTV.hpp"

class LivingRoomTVOffCommand:public Command {
public:
    LivingRoomTVOffCommand(LivingRoomTV* itv) {
        tv = itv;
        description = "TV off";
    }

    void execute() {
        tv->off();
    }
    void undo() {
        tv->on();
    }
private:
    LivingRoomTV* tv;
};