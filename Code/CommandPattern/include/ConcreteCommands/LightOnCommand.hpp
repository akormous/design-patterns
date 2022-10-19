#pragma once
#include "Command.hpp"
#include "Vendors/Light.hpp"

class LightOnCommand : public Command {
public:
    LightOnCommand(Light* iLight) {
        light = iLight;
        description = "Light on";
    }
    void execute() {
        light->on();
    }

private:
    Light* light;
};