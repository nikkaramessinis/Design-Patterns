#include "Car.h"
#include "LeftObserver.h"
#include "MiddleObserver.h"
#include "RightObserver.h"


int main() {
	Car* car = new Car();
	LeftObserver* leftObserver=new LeftObserver(car);
	RightObserver rightObserver(car);
	MiddleObserver middleObserver(car);

	cout << "Hit left or Right to go left or right";
	char pressedButton;
	bool breakLoop = false;
	while (breakLoop == false) {
		cin >> pressedButton;
		switch (pressedButton) {
		case 108: {
			car->setPosition(-1);
			break;
		}
		case 99: {car->setPosition(0);
			break;

		}case 114: {car->setPosition(1);
		break;

		}case 98: {breakLoop = true;
		break;
		}
		default: {
			cout << "Drive carrefully";
		}
		}

	}

}