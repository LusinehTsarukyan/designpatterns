#pragma once
#include "Base.h"
#include "AbstractFactory.h"
#include "Derived_A2.h"
#include "Derived_A1.h"
class Factory1 :public AbstractFactory
{
public:
	Base * function_1();	
	Base * function_2();	
};
