#include "AbstractFactory/Pizza.h"

namespace AbstractFactory{
	
	Pizza::Pizza(PIZZATYPE type, MaterialFactory* factory){
		this->_factory = factory;
		switch (type)
		{
		case BACON:
			this->pizzaName = "Åà¸ùÅûÈø";
			break;
		case CHEEZE:
			this->pizzaName = "ÄÌÀÒÅûÈø";
			break;
		case FRUITE:
			this->pizzaName = "Ë®¹ûÅûÈø";
			break;
		default:
			break;
		}
	}

	void Pizza::prepare(){
		this->_sugar = _factory->createSugar();
		this->_pepper = _factory->createPepper();
	}

	void Pizza::bake(){
		std::cout<<"The "<< pizzaName.c_str() <<"is being baked, please Hold on..."<<std::endl;
	}

	void Pizza::cut(){
		std::cout<<"The "<< pizzaName.c_str() <<" is being cutted, please Hold on..."<<std::endl;
	}

	void Pizza::box(){
		std::cout<<"The "<< pizzaName.c_str() <<" is being boxed, please Hold on..."<<std::endl;
	}
	void Pizza::show(){
		std::cout<<"The Pizza is "<< pizzaName.c_str() <<std::endl;
		std::cout<<"We Use "<< this->_sugar->getSugarName().c_str() <<std::endl;
		std::cout<<"We Use "<< this->_pepper->getPepperName().c_str() <<std::endl;
	}
}