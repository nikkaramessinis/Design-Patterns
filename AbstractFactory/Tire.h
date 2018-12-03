#ifndef TIRE_H
#define TIRE_H




#ifndef __io__
#define __io__
#include <iostream>
#include <string.h>
using namespace std;
#endif // !__io__

class Tire
{
protected:
	string name;
	int pressure;
public:
	Tire(string n, int pressure);
	string getName();
	int getPressure();
	void setPressure(int pressure);
	void setName(string name);
};

#endif // !TIRE_H