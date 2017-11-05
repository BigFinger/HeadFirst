#pragma once
#include "Observer.h"
#include "DisplayEmotion.h"
#include "Subject.h"

class GameLover:public Observer, DisplayEmotion{
public:
	GameLover(Subject* sub);
	~GameLover();
	void update();
protected:
	void display();
private:
	Subject* subject;
};