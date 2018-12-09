#pragma once
#include "PlaneBuilder.h"
class PropellerBuilder :
	public PlaneBuilder
{
public:
	PropellerBuilder();
	void getPartsDone();
	void buildEngine();
	void buildBody();
	~PropellerBuilder();
};

