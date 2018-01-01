#include "Light.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "Door.h"
#include "DoorOpenCommand.h"
#include "DoorCloseCommand.h"
#include "RemoteControl.h"

int main(){
    Light* light = new Light();
    LightOnCommand* lightOnCommand = new LightOnCommand(light);
    LightOffCommand* lightOffCommand = new LightOffCommand(light);
    Door* door = new Door();
    DoorOpenCommand* doorOpenCommand = new DoorOpenCommand(door);
    DoorCloseCommand* doorCloseCommand = new DoorCloseCommand(door);

    RemoteControl* control = new RemoteControl(2);
    control->setCommand(0, lightOnCommand, lightOffCommand);
    control->setCommand(1, doorOpenCommand, doorCloseCommand);

    control->onButtonWasPressed(0);
    control->offButtonWasPressed(0);
    printf("%s",control->toString().c_str());
    control->undoButtonWasPressed();
    control->offButtonWasPressed(0);
    printf("\n");
    control->onButtonWasPressed(1);
    control->offButtonWasPressed(1);
    printf("%s",control->toString().c_str());
    control->undoButtonWasPressed();
    control->offButtonWasPressed(1);

    delete control;

    system("pause");
    return 0;
}