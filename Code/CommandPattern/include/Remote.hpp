#pragma once
#include "Command.hpp"
#include "ConcreteCommands/NoCommand.hpp"
#include <vector>

class Remote {
public:
    /**
     * @brief Construct a new Remote object
     * 
     * @param n number of slots needed
     */
    Remote(int n);
    

    /**
     * @brief Set the Command object
     * 
     * @param slot slot number in which command needs to be set
     * @param onCommand on command of the appliance
     * @param offCommand off command of the appliance
     */
    void setCommand(int slot, Command* onCommand, Command* offCommand);

    /**
     * @brief method called when a on button is pushed on the remote control
     * 
     * @param slot slot number of the button
     */
    void onButtonWasPushed(int slot);

    /**
     * @brief method called when an off button is pushed on the remote control
     * 
     * @param slot slot number of the button
     */
    void offButtonWasPushed(int slot);
    /**
     * @brief method called when undo button is pushed
     * 
     */
    void undoButtonWasPushed();
    /**
     * @brief display the menu and the button options
     * 
     */
    void displayMenu();
private:
    std::vector<Command*> onCommands;
    std::vector<Command*> offCommands;
    Command* undoCommand;
};