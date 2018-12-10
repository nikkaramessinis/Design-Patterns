#pragma once
#include <iostream>
#include <string>
#include "IAttackBehaviour.h"
using namespace std;

class IAttackBehaviour;
class Mob
{
protected:
	int _hp;
	string _name;
	IAttackBehaviour* _behavior;
public:
	Mob(string name,int hp);
	void Attack(Mob* attacked);
	void setAttackBehaviour(IAttackBehaviour* b);
	void setHp(int hp);
	int getHp ();
	const string getName();
	~Mob();
};

