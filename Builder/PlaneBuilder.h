#pragma once
#include "Plane.h"
class PlaneBuilder
{
protected:
	Plane * _plane;
public:
	PlaneBuilder();
	virtual void getPartsDone() = 0;
	virtual void buildBody() = 0;
	virtual void buildEngine() = 0;
	Plane* getPlane() { return _plane; }
	~PlaneBuilder();
};

