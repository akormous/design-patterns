#pragma once
#include<string>
class Command {
public:
    /**
     * @brief Execute command, calls receiver action
     * 
    */
    virtual void execute() {};
    virtual void undo() {};
    
    virtual ~Command() {}
    std::string description;
    
};