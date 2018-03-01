#include <iostream>
#include "MakeP.h"
#include "Prototype.h"
using namespace std;
int main()
{	
	int value1 = 1;
	int value2 = 2;
	Prototype* p1 = MakeP::makep(value1);
	Prototype* p2 = MakeP::makep(value2);
	p1->print();
	p2->print();

}