#pragma once
#include <stdio.h>
#include "FlyBehavior.h"
class FlyWithRocket:public FlyBehavior{
public:
	void fly(){
		printf("I fly with Rocket!\n");
	}
};