#include "PropellerBuilder.h"



PropellerBuilder::PropellerBuilder()
{
}

void PropellerBuilder::getPartsDone()
{
	_plane = new Plane("Propeller Plane");

}

void PropellerBuilder::buildEngine()
{
	_plane->setEngine("Propeller Engine");
}

void PropellerBuilder::buildBody()
{
	_plane->setBody("Propeller Body");
}


PropellerBuilder::~PropellerBuilder()
{
}
