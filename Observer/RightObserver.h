#pragma once
#include "Observer.h"
#include <iostream>
using namespace std;
class RightObserver :
	public Observer
{
public:
	RightObserver(Car* car);
	void update();
	~RightObserver();
};

