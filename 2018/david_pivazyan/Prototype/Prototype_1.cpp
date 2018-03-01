#include "Prototype_1.h"
#include <iostream>
using namespace std;
Prototype* Prototype_1::clone()
{
	return new Prototype_1();
}
void Prototype_1::print()
{
	cout << "Prototype_1" << endl;
}