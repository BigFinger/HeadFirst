#pragma once
#include "Command.h"
#include "Light.h"

class LightOffCommand : public Command{
public:
    LightOffCommand(Light* light);
    ~LightOffCommand();
    void execute();
    void undo();
    string getName();
private:
    Light* light;
};