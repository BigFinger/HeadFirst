#pragma once
#include "AbstractFactory/Sugar.h"

namespace AbstractFactory{
	class WhiteSugar:public Sugar{
	public:
		WhiteSugar(){
			sugarName = "WhiteSugar";
		}
	};
}
