#pragma once
#include <iostream>
using namespace std;
class Light{
public:
    void on(){
        cout << "Light is on" << endl;
    }
    void off(){
        cout << "Light is off" << endl;
    }
};