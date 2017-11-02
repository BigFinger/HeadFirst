#include "RubberDuck.h"
#include "FlyWithRocket.h"
#include "Squeak.h"


RubberDuck::RubberDuck(){
	mFlyBehavior = new FlyWithRocket();
	mQuackBehavior = new Squeak();
}

RubberDuck::~RubberDuck(){
	if (mFlyBehavior != NULL)
	{
		delete mFlyBehavior;
		mFlyBehavior = NULL;
	}
	if (mQuackBehavior != NULL)
	{
		delete mQuackBehavior;
		mQuackBehavior = NULL;
	}
}

void RubberDuck::display(){
	printf("I am RubberDuck!\n");
}

void RubberDuck::fly(){
	mFlyBehavior->fly();
}

void RubberDuck::quack(){
	mQuackBehavior->quack();
}