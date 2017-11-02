#include "Duck.h"

class RedHeadDuck:public Duck{
public:
	RedHeadDuck();
	~RedHeadDuck();
public:
	void display();
	void fly();
	void quack();
};