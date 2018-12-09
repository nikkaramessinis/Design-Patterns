#include "Plane.h"





Plane::Plane(string PlaneType) :_plane{PlaneType}
{
}

void Plane::setEngine(string engine)
{
	_engine = engine;
}

string Plane::getEngine()
{
	return _engine;
}

void Plane::setBody(string body)
{
	_body = body;
}

string Plane::getBody()
{
	return _body;
}

void Plane::show()
{
	cout << "Engine" << _engine<<endl;
	cout << "Body" << _body<<endl;
	cout << "Plane" << _plane<<endl;
}

Plane::~Plane()
{
}
