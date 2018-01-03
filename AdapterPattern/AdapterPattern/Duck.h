#pragma once
#include <iostream>
using namespace std;

class Duck{
public:
    virtual void quack() = 0;
    virtual void fly() = 0;
};