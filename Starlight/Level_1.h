/* Header for the Level 1 class
   Includes building the enemy encounter list */

#pragma once

#include "Enemy.h"

#include <vector>

class Level_1 {
public:
	// Constructor
	Level_1();

	// Setter
	void addEnemy(Enemy newEnemy) { enemyList.push_back(newEnemy); }

	// Getter
	auto getEnemyList() const { return enemyList; }

private:
	std::vector<Enemy> enemyList;
};