#include "Duck.h"

class RubberDuck:public Duck{
public:
	RubberDuck();
	~RubberDuck();
public:
	void display();
	void fly();
	void quack();
};