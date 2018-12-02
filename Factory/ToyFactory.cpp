#include "ToyFactory.h"



	Toy * ToyFactory::createToy(int type) {
		Toy *toy = NULL;
		switch (type) {
		case 1: {
			toy = new Car;
			break;
		}
		case 2: {
			toy = new Bike;
			break;
		}
		case 3: {
			toy = new Plane;
			break;
		}
		default: {
			cout << "Invalid toy type please re-enter type" << endl;
			return NULL;
		}
		}
		toy->prepareParts();
		toy->combineParts();
		toy->applyLabel();
		toy->assembleParts();


		return toy;

	}
