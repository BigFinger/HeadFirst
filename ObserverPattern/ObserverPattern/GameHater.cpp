#include "GameHater.h"
#include "GameData.h"
#include <stdio.h>

GameHater::GameHater(Subject* sub){
	subject = sub;
	sub->registerObserver(this);
}

GameHater::~GameHater(){
	subject = NULL;
}

void GameHater::update(){
	GameData* data = static_cast<GameData*>(subject);
	string game = data->getShootGame();
	printf("Oh No! It will waste my time %s\n", game);
	display();
}

void GameHater::display(){
	GameData* data = static_cast<GameData*>(subject);
	printf("Hate three Game: %s, %s, %s\n", data->getRpgGame(), data->getChessGame(), data->getShootGame());
}