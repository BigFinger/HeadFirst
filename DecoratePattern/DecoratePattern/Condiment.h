#pragma once
#include "Beverage.h"

/* װ�����뱻װ���߱����Ǽ̳�ͬһ�����ͣ����ܲ���װ�� */
class CondimentDecorator : public Beverage{
public:
	virtual string getDescription() = 0;
};