#pragma once
#include <iostream>
typedef int Coordinate;
typedef int Dimension;

using namespace std;

class LegacyRectangle {
private:
	Coordinate x1_;
	Coordinate y1_;
	Coordinate x2_;
	Coordinate y2_;
public:
	LegacyRectangle(Coordinate x1, Coordinate y1, Coordinate x2, Coordinate y2) {
		x1_ = x1;
		y1_ = y1;
		x2_ = x2;
		y2_ = y2;
		cout << "LegacyRectangle: create. (" << x1_ << "," << y1_ << ")=>(" << x2_ << "," << y2_ << ")" << endl;

	}
	void oldDraw() {
		cout << "LegacyRectangle: oldDraw. (" << x1_ << "," << y1_ << ")=>(" << x2_ << "," << y2_ << ")" << endl;
	}



};