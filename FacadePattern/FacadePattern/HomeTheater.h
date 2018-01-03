#pragma once
#include <iostream>
#include "light.h"
#include "Player.h"
using namespace std;
class HomeTheater{
public:
    HomeTheater(Player* player, Light* light):player(player),light(light){}
    void watchMovie(){
        cout<< "-----------------Prepare Movie ---------------" << endl;
        if (player != NULL && light != NULL)
        {
            player->on();
            light->on();
        }
    }
    void endMovie(){
        cout<< "-----------------Close Movie ---------------" << endl;
        if (player != NULL && light != NULL)
        {
            player->off();
            light->off();
        }
    }
private:
    Player* player;
    Light* light;
};