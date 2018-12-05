#pragma once
#include "Observer.h"
#include <iostream>
using namespace std;
class MiddleObserver :
	public Observer
{
public:
	MiddleObserver(Car* car);
	void update();
	~MiddleObserver();
};

