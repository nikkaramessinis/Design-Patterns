#ifndef LUXURY_TIRE_H
#define LUXURY_TIRE_H



#include "Tire.h"


class LuxuryTire :public Tire {
public:
	LuxuryTire() :Tire("LuxuryTire", 100) {}
};
#endif // !LUXURY_TIRE_H
