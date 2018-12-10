#pragma once
#include "Mob.h"
class Client :
	public Mob
{
public:
	Client(string name,int hp);
	~Client();
};

