#pragma once
#include "Command.hpp"
#include "Vendors/LivingRoomTV.hpp"

class LivingRoomTVOnCommand:public Command {
public:
    LivingRoomTVOnCommand(LivingRoomTV* itv) {
        tv = itv;
        description = "TV on";
    }

    void execute() {
        tv->on();
    }
    void undo() {
        tv->off();
    }
private:
    LivingRoomTV* tv;
};