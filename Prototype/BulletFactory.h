#pragma once
#include <unordered_map>
#include "Bullet.h"
using namespace std;
enum BulletType { SIMPLE,GOOD };
class BulletFactory
{
private:
	unordered_map < BulletType, unique_ptr<Bullet>, hash<int>> m_Bullets;
public:
	BulletFactory();
	unique_ptr<Bullet> createBullet(BulletType bulletType);
	~BulletFactory();
};

