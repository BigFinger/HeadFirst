#pragma once
#include <stdio.h>
#include "FlyBehavior.h"

class FlyWithWing: public FlyBehavior {
public:
	void fly(){
		printf("I fly with wing!\n");
	}
};