#include "GameSeller.h"
#include "GameData.h"
#include <stdio.h>

GameSeller::GameSeller(Subject* sub){
	subject = sub;
	sub->registerObserver(this);
}

GameSeller::~GameSeller(){
	subject = NULL;
}

void GameSeller::update(){
	GameData* data = static_cast<GameData*>(subject);
	printf("Oh yeah! This Game will Sell Well, I will be rich~~~%s\n");
	display();
}

void GameSeller::display(){
	GameData* data = static_cast<GameData*>(subject);
	printf("Sell three Game: %s, %s, %s\n", data->getRpgGame(), data->getChessGame(), data->getShootGame());
}