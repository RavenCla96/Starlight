// Header file for all combat related functions

#pragma once

#include "Player.h"
#include "Enemy.h"

class Combat {
public:
	static void battleHUD(Player &currentPlayer, Enemy &currentEnemy);
	static bool battle(Player &currentPlayer, Enemy &currentEnemy);
	static void playerTurn(const Player &currentPlayer, Enemy &currentEnemy);
	static void enemyTurn(Player &currentPlayer, const Enemy &currentEnemy);
};
