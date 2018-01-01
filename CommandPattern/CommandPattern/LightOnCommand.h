#pragma once
#include "Command.h"
#include "Light.h"

class LightOnCommand : public Command{
public:
    LightOnCommand(Light* light);
    ~LightOnCommand();
    void execute();
    void undo();
    string getName();
private:
    Light* light;
};