#include "AbstractFactory/CheezePizza.h"
#include "AbstractFactory/WhiteSugar.h"
#include "AbstractFactory/RedPepper.h"

void CheezePizza::prepare(){
	this->_sugar = ;
	this->_pepper = new RedPepper();
}