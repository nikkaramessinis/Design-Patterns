#include "FireAttack.h"



FireAttack::FireAttack()
{
}

void FireAttack::performAttack(Mob * attacker, Mob * attacked)
{
	cout << attacker->getName() << " scorches " << attacked->getName()<<endl;
}


FireAttack::~FireAttack()
{
}
