#pragma once
#include "Command.hpp"
#include "Vendors/Light.hpp"

class LightOffCommand : public Command {
public:
    LightOffCommand(Light* iLight) {
        light = iLight;
        description = "Light off";
    }
    void execute() {
        light->off();
    }

private:
    Light* light;
};