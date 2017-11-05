#include "GameData.h"

GameData::GameData(){
	rpgGame = "天龙八部";
	chessGame = "三国杀";
	shootGame = "穿越火线";
}

GameData::~GameData(){
	observerList.clear();
}

bool GameData::registerObserver(Observer* ob){
	if (ob != NULL)
	{
		observerList.push_back(ob);
	}
	else
	{
		return false;
	}
	return true;
}

bool GameData::removeObserver(Observer* ob){
	if (ob == NULL)
	{
		return false;
	}
	vector<Observer*>::iterator itor = find(observerList.begin(), observerList.end(), ob);
	if (itor != observerList.end())
	{
		observerList.erase(itor);
		return true;
	}
	return false;
}

void GameData::measureChange(string rpgGame, string chessGame, string shootGame){
	setChange(true);
	notifyObservers();
}

void GameData::setChange(bool ret){
	this->hasChange = ret;
}

void GameData::notifyObservers(){
	vector<Observer*>::iterator itor;
	for (itor = observerList.begin(); itor != observerList.end(); itor++)
	{
		(*itor)->update();
	}
	setChange(false);
}

string GameData::getRpgGame(){
	return rpgGame;
}

string GameData::getChessGame(){
	return chessGame;
}

string GameData::getShootGame(){
	return shootGame;
}