#pragma once

class Prototype
{
public:
	virtual Prototype* clone()=0;
	virtual void print()=0;
};