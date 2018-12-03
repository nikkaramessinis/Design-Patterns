#include "CarFactory.h"

#include "LuxuryTire.cpp"
#include "SimpleTire.cpp"
#include "LuxuryBody.cpp"
#include "SimpleBody.cpp"

//Tire * CarFactory::buildTire() = 0;
class SimpleCarFactory :public CarFactory {
	Tire* buildTire() {
		return new SimpleTire();
	}
	Body *buildBody() {
		return new SimpleBody();
	}
	Car * buildWholeCar() {
		Car * car = new Car("SimlpleCar");
		car->setTire(buildTire());
		car->setBody(buildBody());
		return car;
	}


};


class LuxuryCarFactory :public CarFactory {
	Tire *buildTire() {
		return new LuxuryTire();
	}
	Body *buildBody() {
		return new LuxuryBody();
	}
	Car * buildWholeCar() {
		Car * car = new Car("LuxuryCar");
		car->setTire(buildTire());
		car->setBody(buildBody());
		return car;
	}



};