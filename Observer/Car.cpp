using namespace std;
#include <iostream>
#include <vector>
#include "Car.h"

#include "Observer.h"

int Car::getPosition()
{

	return position;
}

void Car::setPosition(int newPosition)
{
	position = newPosition;
	notify();
}


void Car::attach(Observer * obs)
{
	observerList.push_back(obs);
}

void Car::detach(Observer * obs)
{
	observerList.erase(remove(observerList.begin(), observerList.end(), obs));
}

void Car::notify()
{
	for (int i = 0; i<observerList.size(); ++i) { observerList[i]->update(); }
}
