#pragma once
#include "Subject.h"
#include "Observer.h"
#include <vector>
#include <string>
using namespace std;

class GameData: public Subject{
public:
	GameData();
	virtual ~GameData();
public:
	bool registerObserver(Observer* ob);
	bool removeObserver(Observer* ob);
	void measureChange(string rpgGame, string chessGame, string shootGame);
public:
	string getRpgGame();
	string getChessGame();
	string getShootGame();
private:
	void setChange(bool ret);
	void notifyObservers();
private:
	string rpgGame;
	string chessGame;
	string shootGame;
	bool hasChange;
	vector<Observer*> observerList;
};