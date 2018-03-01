#include "Derived_B2.h"
#include "Derived_B1.h"
#include "Factory2.h"

Base * Factory2:: function_1()
{
	return new Derived_B1();
}
Base* Factory2:: function_2()
{
	return new Derived_B2();
}