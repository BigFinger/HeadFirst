#include "GameLover.h"
#include "GameData.h"
#include <stdio.h>

GameLover::GameLover(Subject* sub){
	subject = sub;
	sub->registerObserver(this);
}

GameLover::~GameLover(){
	subject = NULL;
}

void GameLover::update(){
	GameData* data = static_cast<GameData*>(subject);
	string game = data->getRpgGame();
	printf("Oh yeah! I Love this Game %s\n", game);
	display();
}

void GameLover::display(){
	GameData* data = static_cast<GameData*>(subject);
	printf("Love three Game: %s, %s, %s\n", data->getRpgGame(), data->getChessGame(), data->getShootGame());
}