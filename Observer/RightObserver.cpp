#include "RightObserver.h"





RightObserver::RightObserver(Car * car):Observer(car)
{
}

void RightObserver::update()
{
	int pos = getCar()->getPosition();
	if (pos > 0) {
		cout << "right side" << endl;
	}
}

RightObserver::~RightObserver()
{
}
