#include "Door.h"
#include "Command.h"

class DoorCloseCommand:public Command{
public:
    DoorCloseCommand(Door* door);
    ~DoorCloseCommand();
    void execute();
    void undo();
    string getName();
private:
    Door* door;
};