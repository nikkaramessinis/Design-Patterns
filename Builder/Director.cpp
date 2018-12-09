#include "Director.h"




Director::Director()
{
}

Plane* Director::createPlane(PlaneBuilder * builder)
{
	builder->getPartsDone();
	builder->buildBody();
	builder->buildEngine();
	return builder->getPlane();
}


Director::~Director()
{
}
