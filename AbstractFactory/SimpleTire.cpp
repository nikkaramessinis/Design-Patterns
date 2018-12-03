#ifndef SIMPLE_TIRE_H
#define SIMPLE_TIRE_H



#include "Tire.h"


class SimpleTire :public Tire {
public:
	SimpleTire() :Tire("SimpleTire", 75) {}
};
#endif // !SIMPLE_TIRE_H
