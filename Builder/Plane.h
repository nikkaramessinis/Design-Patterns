#pragma once
#include <iostream>
#include <string>
using namespace std;
class Plane
{
	string _plane;
	string _body;
	string _engine;

public:
	Plane(string PlaneType);
	void setEngine(string engine);
	string getEngine();
	void setBody(string body);
	string getBody();
	void show();
	~Plane();
};

