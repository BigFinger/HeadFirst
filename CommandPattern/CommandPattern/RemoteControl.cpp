#include "RemoteControl.h"
#include "noCommand.h"

RemoteControl::RemoteControl(int num){
    this->onCommands = new Command*[num];
    for(int i = 0; i < num; i++)
    {
        this->onCommands[i] = new noCommand();
    }
    this->offCommands = new Command*[num];
    for(int i = 0; i < num; i++)
    {
        this->offCommands[i] = new noCommand();
    }
    commandNum = num;
    this->undoCommand = NULL;
}

RemoteControl::~RemoteControl(){
    for (int i = 0; i < commandNum; i++)
    {
        delete this->onCommands[i];
        this->onCommands[i] = NULL;
        delete this->offCommands[i];
        this->offCommands[i] = NULL;
    }
    if (this->onCommands != NULL)
    {
        delete[] this->onCommands;
        this->onCommands = NULL;
    }
    if (this->offCommands != NULL)
    {
        delete[] this->offCommands;
        this->offCommands = NULL;
    }
};


void RemoteControl::setCommand(int num, Command* onCommand, Command* offCommand){
    delete this->onCommands[num];
    this->onCommands[num] = onCommand;
    delete this->offCommands[num];
    this->offCommands[num] = offCommand;

}

void RemoteControl::onButtonWasPressed(int num){
    this->onCommands[num]->execute();
    this->undoCommand = this->offCommands[num];
}

void RemoteControl::offButtonWasPressed(int num){
    this->offCommands[num]->execute();
    this->undoCommand = this->onCommands[num];
}

void RemoteControl::undoButtonWasPressed(){
    if (this->undoCommand != NULL)
    {
        this->undoCommand->execute();
    }
}

string RemoteControl::toString(){
    string tempLine = "";
    char tempBuff[100] = {0};
    tempLine.append("\n------ Remote Control ------\n");
    if (onCommands != NULL && offCommands != NULL)
    for (int i = 0; i < commandNum; i++)
    {
        itoa(i, tempBuff, 10);
        string temp = tempBuff;
        tempLine.append("[slot " + temp + "] " + onCommands[i]->getName() + "  " + offCommands[i]->getName() + "\n");
    }
    return tempLine;
}