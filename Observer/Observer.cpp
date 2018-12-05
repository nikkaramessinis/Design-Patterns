#include "Observer.h"



Car * Observer::getCar()
{
	return _car;
}

Observer::Observer(Car *car)
{
	_car = car;
	_car->attach(this);
}


Observer::~Observer()
{
}
