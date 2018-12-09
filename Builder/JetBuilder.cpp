#include "JetBuilder.h"



JetBuilder::JetBuilder()
{
}

void JetBuilder::getPartsDone()
{
	_plane = new Plane("Jet Plane");
}

void JetBuilder::buildEngine()
{
	_plane->setEngine("Jet Engine");
}

void JetBuilder::buildBody()
{
	_plane->setBody("Jet Body");
}


JetBuilder::~JetBuilder()
{
}
