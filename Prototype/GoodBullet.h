#pragma once
#include "Bullet.h"
class GoodBullet :
	public Bullet
{
public:
	GoodBullet(string bulletName, float speed, float firePower, float damagePower);
	unique_ptr<Bullet> clone();
	~GoodBullet();
};

