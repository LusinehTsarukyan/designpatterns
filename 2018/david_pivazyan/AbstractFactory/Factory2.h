#pragma once
#include "Base.h"
#include "AbstractFactory.h"
#include "Derived_B2.h"
#include "Derived_B1.h"
class Factory2 :public AbstractFactory
{
public:
	Base* function_1();
	Base* function_2();	
};