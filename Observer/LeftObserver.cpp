#include "LeftObserver.h"




LeftObserver::LeftObserver(Car * car):Observer(car)
{
}

void LeftObserver::update()
{
	int pos = getCar()->getPosition();
	if (pos < 0)
		cout << "left side" << endl;
}

LeftObserver::~LeftObserver()
{
}
