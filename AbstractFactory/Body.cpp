#ifndef BODY

#define BODY
#include "Body.h"
#endif // !


Body::Body()
{
}

Body::Body(string n, int stren)
{
	name = n;
	strength = stren;
}

string Body::getName()
{
	return name;
}

int Body::getStrength()
{
	return strength;
}


Body::~Body()
{
}




