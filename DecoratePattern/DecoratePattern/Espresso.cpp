#include "Espresso.h"

Espresso::Espresso(string d){
	this->setDescription(d);
}

double Espresso::cost(){
	return 1.99;
}
