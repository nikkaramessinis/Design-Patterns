#ifndef __io__
#define __io__

#include <string>
#include <iostream>
 
using namespace std;



#endif

#include "ToyFactory.h"

int main() {
	int type;
	while (1)
	{
		cout << endl << "Enter type or zero for exit " << endl;
		cin >> type;
		if (!type)
			break;
		Toy *v = ToyFactory::createToy(type);
		if (v) {
			v->showProduct();
			delete v;
		}
	}
	cout << "Exit" << endl;
	return 0;
}
