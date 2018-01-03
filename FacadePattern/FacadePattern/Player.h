#pragma once
#include <iostream>
using namespace std;
class Player{
public:
    void on(){
        cout << "Player is on" << endl;
    }
    void off(){
        cout << "Player is off" << endl;
    }
};