#include "Remote.hpp"
#include<iostream>
Remote::Remote(int n) {
    NoCommand* noCommand = new NoCommand();
    onCommands.resize(n, noCommand);
    offCommands.resize(n, noCommand);
    undoCommand = noCommand;
}

void Remote::setCommand(int slot, Command* onCommand, Command* offCommand) {
    onCommands[slot] = onCommand;
    offCommands[slot] = offCommand;
}

void Remote::onButtonWasPushed(int slot) {
    onCommands[slot]->execute();
    undoCommand = onCommands[slot];
}

void Remote::offButtonWasPushed(int slot) {
    offCommands[slot]->execute();
    undoCommand = offCommands[slot];
}

void Remote::undoButtonWasPushed() {
    undoCommand->undo();
}

void Remote::displayMenu() {
    for(int i = 0; i < onCommands.size(); i++) {
        std::cout << i+1 << ". " << onCommands[i]->description << ", " << offCommands[i]->description << std::endl;
    }
}