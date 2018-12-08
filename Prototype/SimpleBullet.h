#pragma once
#include "Bullet.h"
class SimpleBullet :
	public Bullet
{
public:
	SimpleBullet(string bulletName,float speed,float firePower,float damagePower);
	unique_ptr<Bullet> clone();
	~SimpleBullet();
};

