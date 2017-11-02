#include "RedHeadDuck.h"
#include "FlyWithWing.h"
#include "Quack.h"


RedHeadDuck::RedHeadDuck(){
	mFlyBehavior = new FlyWithWing();
	mQuackBehavior = new Quack();
}

RedHeadDuck::~RedHeadDuck(){
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

void RedHeadDuck::display(){
	printf("I am RubberDuck!\n");
}

void RedHeadDuck::fly(){
	mFlyBehavior->fly();
}

void RedHeadDuck::quack(){
	mQuackBehavior->quack();
}