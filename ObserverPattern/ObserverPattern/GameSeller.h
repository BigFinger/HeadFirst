#pragma once
#include "Observer.h"
#include "DisplayEmotion.h"
#include "Subject.h"

class GameSeller:public Observer, DisplayEmotion{
public:
	GameSeller(Subject* sub);
	~GameSeller();
	void update();
protected:
	void display();
private:
	Subject* subject;
};