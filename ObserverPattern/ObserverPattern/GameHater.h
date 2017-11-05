#pragma once
#include "Observer.h"
#include "DisplayEmotion.h"
#include "Subject.h"

class GameHater:public Observer, DisplayEmotion{
public:
	GameHater(Subject* sub);
	~GameHater();
	void update();
protected:
	void display();
private:
	Subject* subject;
};