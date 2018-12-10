#include "MaceAttack.h"



MaceAttack::MaceAttack()
{
}

void MaceAttack::performAttack(Mob* attacker,Mob* attacked) {
	cout << attacker->getName() << " crushes " << attacked->getName() << endl;

}
MaceAttack::~MaceAttack()
{
}
