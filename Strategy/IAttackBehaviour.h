#pragma once
#include "Mob.h"
class Mob;
class IAttackBehaviour
{
public:
	IAttackBehaviour();
	virtual void performAttack(Mob* attacker, Mob* attacked) = 0;
	~IAttackBehaviour();
};

