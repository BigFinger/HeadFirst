#include "Door.h"
#include "Command.h"

class DoorOpenCommand:public Command{
public:
    DoorOpenCommand(Door* door);
    ~DoorOpenCommand();
    void execute();
    void undo();
    string getName();
private:
    Door* door;
};