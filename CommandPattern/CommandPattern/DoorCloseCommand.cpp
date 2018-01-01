#include "DoorCloseCommand.h"

DoorCloseCommand::DoorCloseCommand(Door* door){
    this->door = door;
}

DoorCloseCommand::~DoorCloseCommand(){
    delete this->door;
}

void DoorCloseCommand::execute(){
    this->door->close();
}

void DoorCloseCommand::undo(){
    this->door->open();
}

string DoorCloseCommand::getName(){
    return "DoorCloseCommand";
}