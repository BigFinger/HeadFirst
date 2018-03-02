#pragma once
#include "Beverage.h"

/* 装饰者与被装饰者必须是继承同一个类型，才能不断装饰 */
class CondimentDecorator : public Beverage{
public:
	virtual string getDescription() = 0;
};