#pragma once
#include "Command.hpp"

class NoCommand : public Command {
public:
    NoCommand() {
        description = "empty";
    }

    void execute() {
        // do nothing
    }
    void undo() {
        // do nothing nothing
    }
};