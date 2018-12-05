#pragma once
#include "Observer.h"
#include <iostream>
using namespace std;
class LeftObserver :
	public Observer
{
public:
	LeftObserver(Car* car);
	void update();
	~LeftObserver();
};

