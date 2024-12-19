// Implementation of all combat related functions

#include "Combat.h"

#include <iostream>

using namespace std;

void Combat::battleHUD(Player &currentPlayer, Enemy &currentEnemy) {
	std::cout << currentPlayer.getName() << " health: " << currentPlayer.getPlayerClass()->get()->getHealth() << endl;
	std::cout << currentPlayer.getName() << " level: " << currentPlayer.getPlayerClass()->get()->getLevel() << endl;
	std::cout << currentEnemy.name << " health: " << currentEnemy.health << endl;
	std::cout << endl;
}

void Combat::playerTurn(const Player& currentPlayer, Enemy& currentEnemy) {
	std::cout << "Select Skill to use: " << endl;
	auto skillNum = 1;
	for (const auto& skill : currentPlayer.getPlayerClass()->get()->getSkills()) {
		std::cout << skillNum << ". " << skill.skillName << endl;
		++skillNum;
	}

	// Player input
	int userInput = 0;
	std::cin >> userInput;
	std::cout << endl;

	if (userInput < (currentPlayer.getPlayerClass()->get()->getSkills().size() + 1)) {
		currentEnemy.health -= currentPlayer.getPlayerClass()->get()->getSkills()[userInput - 1].damage;
	}
}

void Combat::enemyTurn(Player &currentPlayer, const Enemy &currentEnemy) {
	currentPlayer.getPlayerClass()->get()->modifyHealth(currentEnemy.damage);
	std::cout << "Enemy deals: " << currentEnemy.damage << " damage to you" << endl;
	std::cout << endl;
}

bool Combat::battle(Player &currentPlayer, Enemy &currentEnemy) {
	while (currentPlayer.getPlayerClass()->get()->getHealth() > 0 && currentEnemy.health > 0)
	{
		battleHUD(currentPlayer, currentEnemy);
		playerTurn(currentPlayer, currentEnemy);
		if (currentEnemy.health > 0) {
			enemyTurn(currentPlayer, currentEnemy);
		}
	}
	if (currentEnemy.health <= 0)
	{
		std::cout << "\n-- Enemy Slain -- " << endl;
		std::cout << endl;
		return true;
	}
	else {
		return false;
	}
}