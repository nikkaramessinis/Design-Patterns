#ifndef CARFACTORY_H
#define CARFACTORY_H




#include "Car.h"

class CarFactory
{
private:
		Car* car;
protected:
	virtual Tire* buildTire()=0;
	virtual Body* buildBody() = 0;
public:
	virtual Car* buildWholeCar() = 0;
};

#endif // !