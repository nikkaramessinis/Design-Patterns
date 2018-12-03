#ifndef CAR_H
#define CAR_H




#ifndef __io__
#define __io__
#include <iostream>
#include <string>
using namespace std;
#endif // !__io__

#ifndef TIRE
#define TIRE
#include "Tire.h"
#endif

#ifndef BODY

#define BODY
#include "Body.h"
#endif // !
class Car
{
protected:
	string name;
	Tire* tire;
	Body*body;
public:
	Car(string n);
	void setTire(Tire*t);
	void setBody(Body* b);
	void printDetails();
};


#endif // !CAR_H
