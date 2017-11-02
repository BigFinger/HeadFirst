#pragma once
#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck{
public:
	virtual void display() = 0;
	virtual void fly() = 0;
	virtual void quack() = 0;
protected:
	FlyBehavior*	mFlyBehavior;
	QuackBehavior*  mQuackBehavior;
};