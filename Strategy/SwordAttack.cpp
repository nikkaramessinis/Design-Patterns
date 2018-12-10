#include "SwordAttack.h"



SwordAttack::SwordAttack()
{
}

void SwordAttack::performAttack(Mob * attacker, Mob * attacked)
{
	
		cout << attacker->getName() << " slashes " << attacked->getName() << endl;
	
}


SwordAttack::~SwordAttack()
{
}
