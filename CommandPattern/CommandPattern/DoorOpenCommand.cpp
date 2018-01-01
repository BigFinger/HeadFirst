#include "DoorOpenCommand.h"

DoorOpenCommand::DoorOpenCommand(Door* door){
    this->door = door;
}

DoorOpenCommand::~DoorOpenCommand(){
    delete this->door;
}

void DoorOpenCommand::execute(){
    this->door->open();
}

void DoorOpenCommand::undo(){
    this->door->close();
}

string DoorOpenCommand::getName(){
    return "DoorOpenCommand";
}