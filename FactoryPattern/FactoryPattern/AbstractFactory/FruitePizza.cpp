#include "AbstractFactory/FruitePizza.h"
#include "AbstractFactory/WhiteSugar.h"
#include "AbstractFactory/GreenPepper.h"

void FruitePizza::prepare(){
	this->_sugar = new WhiteSugar();
	this->_pepper = new GreenPepper();
}