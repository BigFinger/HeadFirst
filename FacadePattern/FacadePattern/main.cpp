#include <iostream>
#include "Light.h"
#include "Player.h"
#include "HomeTheater.h"
using namespace std;

int main(){
    Player* player = new Player();
    Light* light = new Light();
    HomeTheater *homeTheater = new HomeTheater(player, light);
    homeTheater->watchMovie();
    homeTheater->endMovie();
    delete player;
    delete light;
    delete homeTheater;
    system("PAUSE");
    return 0;
}