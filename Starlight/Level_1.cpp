// Implementation of Level 1 Constructor

#include "Level_1.h"

Level_1::Level_1() {
	Enemy goblin_1 = { "Goblin Melee", 30, 10 };
	Enemy goblin_2 = { "Goblin Range", 20, 15 };

	addEnemy(goblin_1);
	addEnemy(goblin_2);
}