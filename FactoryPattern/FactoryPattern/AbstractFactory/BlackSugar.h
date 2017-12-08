#pragma once
#include "AbstractFactory/Sugar.h"

namespace AbstractFactory{
	class BlackSugar:public Sugar{
	public:
		BlackSugar(){
			sugarName = "BlackSugar";
		}
	};
}