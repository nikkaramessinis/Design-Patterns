#pragma once
#include "IAttackBehaviour.h"
class SwordAttack :
	public IAttackBehaviour
{
public:
	SwordAttack();
	void performAttack(Mob* attacker, Mob*attacked);
	~SwordAttack();
};

