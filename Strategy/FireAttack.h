#pragma once
#include "IAttackBehaviour.h"
#include <iostream>
using namespace std;
class FireAttack :
	public IAttackBehaviour
{
public:
	FireAttack();
	void performAttack(Mob* attacker, Mob*attacked);
	~FireAttack();
};

