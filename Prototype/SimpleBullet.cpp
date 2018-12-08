#include "SimpleBullet.h"





SimpleBullet::SimpleBullet(string bulletName, float speed, float firePower, float damagePower):Bullet(bulletName,speed,firePower,damagePower)
{
}

unique_ptr<Bullet> SimpleBullet::clone() 
{
	return make_unique<SimpleBullet>(*this);
}

SimpleBullet::~SimpleBullet()
{
}
