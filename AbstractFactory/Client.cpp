#ifndef __io__
#define __io__

#include <iostream>
#include <string>

using namespace std;

#endif

#include  "CarFactory.cpp"

//#define SIMPLE_CAR 1
#define LUXURY_CAR 1


int main() {
	string type;
	cout << "Type Luxury or Simple";
	cin >> type;
	CarFactory * factory;
	if (type == "Simple") {
	factory = new SimpleCarFactory;
	}
	else {
//#elif LUXURY_CAR
	factory = new LuxuryCarFactory;
	}
//#endif
	Car * car = factory->buildWholeCar();
	car->printDetails();
	return 0;
}
