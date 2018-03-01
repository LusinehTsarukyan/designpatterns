#include "Factory1.h"
#include "Derived_A2.h"
#include "Derived_A1.h"


Base* Factory1:: function_1()
{
	return new Derived_A1();
}
Base* Factory1::function_2()
{
	return new Derived_A2();
}