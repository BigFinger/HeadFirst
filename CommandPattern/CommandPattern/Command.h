#pragma once
#include <iostream>
#include <string>
using namespace std;

class Command{
public :
    virtual void execute() = 0;
    virtual void undo() = 0;
    virtual string getName() = 0;
};