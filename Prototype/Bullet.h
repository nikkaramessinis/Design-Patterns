#pragma once
#include <iostream>
#include <string>
#include <memory>
using namespace std;
class Bullet
{
protected:
	string _bulletName;
	float _speed;
	float _firePower;
	float _damagePower;
	float _direction;
public:
	Bullet();
	Bullet(string bulletName, float speed, float firePower, float damagePower);
	virtual ~Bullet();
	virtual unique_ptr<Bullet> clone() = 0;
	void fire(float direction);

};

