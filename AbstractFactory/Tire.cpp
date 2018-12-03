

#ifndef TIRE
#define TIRE
#include "Tire.h"
#endif
using namespace std;


Tire::Tire(string n, int press)
{
	name = n;
	pressure = press;
}

string Tire::getName()
{
	return name;
}

int Tire::getPressure()
{
	return pressure;
}

void Tire::setName(string n)
{
	name = n;
}

void Tire::setPressure(int  pres)
{
	pressure = pres;
}


