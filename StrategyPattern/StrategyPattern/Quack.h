#pragma once
#include <stdio.h>
#include "QuackBehavior.h"

class Quack:public QuackBehavior{
public:
	void quack(){
		printf("GaGa\n");
	}
};