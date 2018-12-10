#pragma once
#include "IAttackBehaviour.h"
class MaceAttack :
	public IAttackBehaviour
{
public:
	MaceAttack();
	void performAttack(Mob* attacker,Mob*attacked);
	~MaceAttack();
};

