



#include<iostream>
#include"Base.h"
#include"AbstractFactory.h"
#include "Factory1.h"
#include "Factory2.h"

int main()
{
	Base* b_p1, *b_p2, *b_p3, *b_p4;
	AbstractFactory* factory1 = new Factory1();
	AbstractFactory* factory2 = new Factory2();
	b_p1 = factory1->function_1();
	b_p2 = factory1->function_2();
	b_p3 = factory2->function_1();
	b_p4 = factory2->function_2();
	b_p1->print();
	b_p2->print();
	b_p3->print();
	b_p4->print();

}

