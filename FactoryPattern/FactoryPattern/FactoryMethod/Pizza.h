#pragma once
#include <iostream>

namespace FactoryMethod{
	typedef enum pizzaType{
		BACON,
		CHEEZE,
		FRUITE
	}PIZZATYPE;

	class Pizza{
	public:
		Pizza(PIZZATYPE type);
	public:
		void bake();
		void cut();
		void box();
		void show();
	protected:
		std::string pizzaName;
	};
}
