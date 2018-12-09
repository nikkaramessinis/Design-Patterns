#include <iostream>
#include "Director.h"
#include "PropellerBuilder.h"
#include "JetBuilder.h"
int main() {
	Director dir;
	JetBuilder jb;
	PropellerBuilder pb;
	Plane *jet = dir.createPlane(&jb);
	Plane *pro = dir.createPlane(&pb);
	jet->show();
	pro->show();



}