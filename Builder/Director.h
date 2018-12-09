#pragma once
#include "PlaneBuilder.h"
class Director
{
public:
	Director();
	Plane* createPlane(PlaneBuilder* builder);
	~Director();
};

