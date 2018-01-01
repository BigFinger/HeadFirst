#include "Command.h"

class noCommand:public Command{
public:
    void execute();
    void undo();
    string getName();
};