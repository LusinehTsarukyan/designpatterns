#include "Prototype_2.h"
#include <iostream>
using namespace std;
Prototype* Prototype_2::clone()
{
	return new Prototype_2();
}
void Prototype_2::print()
{
	cout << "Prototype_1" <<  endl;
}