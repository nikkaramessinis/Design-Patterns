#ifndef BODY_H
#define BODY_H



#ifndef __io__
#define __io__
#include <iostream>
#include <string.h>
using namespace std;
#endif // !__io__


class Body
{
protected:
	string name;
	int strength;
public:
	Body();
	Body(string n, int stren);
	string getName();
	int getStrength();
	~Body();
};

#endif // !BODY_H