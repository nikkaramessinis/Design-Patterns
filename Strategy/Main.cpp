#include <iostream>
#include "Mob.h"
#include "Client.h"
#include "MaceAttack.h"
#include "FireAttack.h"
#include "SwordAttack.h"

int main() {

	Mob orc("Orc", 200);
	Mob dragon("Lord Nagafen", 200);
	MaceAttack mace;
	FireAttack fire;
	orc.setAttackBehaviour(&mace);
	dragon.setAttackBehaviour(&fire);

	Client player1("Bink", 450);
	SwordAttack sword;
	player1.setAttackBehaviour(&sword);
	orc.Attack(&player1);
	dragon.Attack(&player1);

	player1.Attack(&dragon);
	while (1);
	return 0;


}