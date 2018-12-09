#pragma once
#include "PlaneBuilder.h"
class JetBuilder :
	public PlaneBuilder
{
public:
	JetBuilder();
	void getPartsDone();
	void buildEngine();
	void buildBody();
	~JetBuilder();
};

