#include "LightOffCommand.h"

LightOffCommand::LightOffCommand(Light* light){
    this->light = light;
}

LightOffCommand::~LightOffCommand(){
    delete this->light;
}

void LightOffCommand::execute(){
    this->light->off();
}

void LightOffCommand::undo(){
    this->light->on();
}

string LightOffCommand::getName(){
    return "LightOffCommand";
}