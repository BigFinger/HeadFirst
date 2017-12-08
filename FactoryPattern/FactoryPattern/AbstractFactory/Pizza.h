#pragma once
#include <iostream>
#include "AbstractFactory/Sugar.h"
#include "AbstractFactory/Pepper.h"
#include "AbstractFactory/MaterialFactory.h"
namespace AbstractFactory{
	typedef enum pizzaType{
		BACON,
		CHEEZE,
		FRUITE
	}PIZZATYPE;

	class Pizza{
	public:
		Pizza(PIZZATYPE type, MaterialFactory* factory);
	public:
		void prepare();
		void bake();
		void cut();
		void box();
		void show();
	protected:
		Sugar* _sugar;
		Pepper* _pepper;
	protected:
		MaterialFactory* _factory;
	protected:
		std::string pizzaName;
	};
}
