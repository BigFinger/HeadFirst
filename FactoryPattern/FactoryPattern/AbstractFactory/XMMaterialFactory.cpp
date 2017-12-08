#include "AbstractFactory/XMMaterialFactory.h"
#include "AbstractFactory/BlackSugar.h"
#include "AbstractFactory/GreenPepper.h"
namespace AbstractFactory{

	XMMaterialFactory::XMMaterialFactory(std::string name){
		this->_factoryName = name;
	}

	Sugar* XMMaterialFactory::createSugar(){
		Sugar* sugar = NULL;
		sugar = new BlackSugar();
		return sugar;
	}

	Pepper* XMMaterialFactory::createPepper(){
		Pepper* pepper = NULL;
		pepper = new GreenPepper();
		return pepper;
	}

	std::string XMMaterialFactory::getName(){
		return _factoryName;
	}
}