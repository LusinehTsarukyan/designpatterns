#include "MakeP.h"
#include "Prototype_1.h"
#include "Prototype_2.h"
Prototype* MakeP::types[] = { new Prototype_1,new Prototype_2 };
Prototype* MakeP::makep(int n)
{
	return types[n]->clone();
}
