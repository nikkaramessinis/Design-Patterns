#include <iostream>
#include "BulletFactory.h"


int main() {
	BulletFactory bulletfactory;
	auto Bullet = bulletfactory.createBullet(SIMPLE);
	Bullet->fire((float)90);

	Bullet = bulletfactory.createBullet(GOOD);
	Bullet->fire((float)100);
	while (1);
}