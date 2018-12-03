#include "Car.h"





	Car::Car(string n)
{
	name = n;
}

void Car::setTire(Tire * t)
{
	tire = t;
}

void Car::setBody(Body * b)
{
	body = b;
}

void Car::printDetails()
{
	cout << endl << "Car "<<name << endl;
	cout << "Tire " << tire->getName() << "Pressure " << tire->getPressure() << endl;
	cout << "Body "<< body->getName() << "Strength " << body->getStrength() << endl << endl;
}
