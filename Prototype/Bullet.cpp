#include "Bullet.h"



Bullet::Bullet()
{
}

Bullet::Bullet(string bulletName, float speed, float firePower, float damagePower):_bulletName(bulletName),_speed(speed),_firePower(firePower),_damagePower(damagePower)
{
}


Bullet::~Bullet()
{
}



void Bullet::fire(float direction)
{
	
		_direction = direction;
		cout << "Bullet Name";
		cout << _bulletName << endl;
		cout << "Speed" << _speed << endl;
		cout << "Fire Power" << _firePower << endl;
		cout << "Damage Power" << _damagePower << endl;
		cout << "Direction " << _direction << endl;

}
