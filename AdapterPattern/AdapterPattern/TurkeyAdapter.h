#pragma once
#include "Duck.h"
#include "Turkey.h"

class TurkeyAdapter : public Duck{
public:
    TurkeyAdapter(Turkey* turkey);
    void quack();
    void fly();
private:
    Turkey* turkey;
};