#include "GoodBullet.h"





GoodBullet::GoodBullet(string bulletName, float speed, float firePower, float damagePower):Bullet(bulletName,speed,firePower,damagePower)
{
}

unique_ptr<Bullet> GoodBullet::clone()
{
	return make_unique<GoodBullet>(*this);
}


GoodBullet::~GoodBullet()
{
}
