#include "Mob.h"





Mob::Mob(string name, int hp):_name(name),_hp(hp),_behavior(0)
{
}

void Mob::Attack(Mob * attacked)
{
	//cout << getName() << "hits" << attacked->getName();
	if(_behavior)
	_behavior->performAttack(this,attacked);
	else
		cout << getName() << "hits" << attacked->getName();
}

void Mob::setAttackBehaviour(IAttackBehaviour * b)
{
	_behavior = b;
}

void Mob::setHp(int hp)
{
	_hp = hp;
}

inline int Mob::getHp()
{
	return _hp;
}

const string Mob::getName()
{
	return _name;
}


Mob::~Mob()
{
}
