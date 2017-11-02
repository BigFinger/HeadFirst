#pragma once
#include <stdio.h>
#include "QuackBehavior.h"

class Squeak:public QuackBehavior{
public:
	void quack(){
		printf("ZiZi\n");
	}
};