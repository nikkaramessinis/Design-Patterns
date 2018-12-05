#pragma once
#include "Car.h"
class Observer
{

	Car* _car;
protected:
	Car * getCar();
public:
	Observer(Car* car);
	virtual void update() = 0;
	~Observer();
};

