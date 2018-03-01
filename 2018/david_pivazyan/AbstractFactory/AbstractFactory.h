#pragma once
#include "Base.h"
class AbstractFactory
{
public:
	virtual Base* function_1() = 0;
	virtual Base* function_2() = 0;
};