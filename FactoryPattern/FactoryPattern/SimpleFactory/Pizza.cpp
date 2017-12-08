#include "SimpleFactory/Pizza.h"

namespace SimpleFactory{
	Pizza::Pizza(PIZZATYPE type){
		switch (type)
		{
		case BACON:
			this->pizzaName = "培根披萨";
			break;
		case CHEEZE:
			this->pizzaName = "奶酪披萨";
			break;
		case FRUITE:
			this->pizzaName = "水果披萨";
			break;
		default:
			break;
		}
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
	}
}