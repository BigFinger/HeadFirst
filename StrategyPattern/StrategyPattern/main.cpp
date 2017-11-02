#include <stdio.h>
#include "RubberDuck.h"
#include "RedHeadDuck.h"

int main(){
	Duck *rubberDuck = new RubberDuck();
	Duck *redHeadDuck = new RedHeadDuck();

	rubberDuck->display();
	rubberDuck->fly();
	rubberDuck->quack();

	redHeadDuck->display();
	redHeadDuck->fly();
	redHeadDuck->quack();

	delete rubberDuck;
	rubberDuck = NULL;
	delete redHeadDuck;
	redHeadDuck = NULL;

	getchar();
	return 0;
}