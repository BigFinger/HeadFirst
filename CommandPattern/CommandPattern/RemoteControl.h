#pragma once
#include "Command.h"
#include <string>

class RemoteControl{
public:
    RemoteControl(int num);
    ~RemoteControl();
    void setCommand(int num, Command* onCommand, Command* offCommand);
    void onButtonWasPressed(int num);
    void offButtonWasPressed(int num);
    void undoButtonWasPressed();
    string toString();
private:
    Command** onCommands;
    Command** offCommands;
    Command* undoCommand;
    int commandNum;
};