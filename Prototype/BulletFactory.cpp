#include "BulletFactory.h"
#include "SimpleBullet.h"
#include "GoodBullet.h"


BulletFactory::BulletFactory()
{
	m_Bullets[SIMPLE] = make_unique<SimpleBullet>("SimpleBullet", 50, 75, 75);
	m_Bullets[GOOD] = make_unique<GoodBullet>("GoodBullet", 50, 100, 100);

}

unique_ptr<Bullet> BulletFactory::createBullet(BulletType BulletType)
{
	return m_Bullets[BulletType]->clone();
}


BulletFactory::~BulletFactory()
{
}
