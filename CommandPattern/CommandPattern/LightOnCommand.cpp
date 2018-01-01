#include "LightOnCommand.h"

LightOnCommand::LightOnCommand(Light* light){
    this->light = light;
}

LightOnCommand::~LightOnCommand(){
    delete this->light;
    this->light = NULL;
}

void LightOnCommand::execute(){
    this->light->on();
}

void LightOnCommand::undo(){
    this->light->off();
}

string LightOnCommand::getName(){
    return "LightOnCommand";
}