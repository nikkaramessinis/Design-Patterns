#pragma once
#include <vector>
#include <algorithm>

class Car
{
	int position;
	std::vector<class Observer*> observerList;

public:
	int getPosition();
	void setPosition(int newPosition);
	void attach(Observer *obs);
	void detach(Observer *obs);
	void notify();
};