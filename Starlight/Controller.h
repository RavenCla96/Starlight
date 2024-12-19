// Header for the Controller that manages the Starlight game

#pragma once

#include "BaseClass.h"
#include "Wizard.h"
#include "Player.h"

#include <string>
#include <iostream>
#include <functional>

class Controller {
public:
	// Other
	static std::vector<bool(*)(Player& player)> buildLevelList();

	// Menu functions
	static void menu();
	static void displayMenuOptions();

	// Game controller functions
	static int startGame();
	static void gameOver();
	static void winGame();
	static std::string getPlayerName();
	static BaseClass getPlayerClass();
	static bool playLevel1(Player &player);

private:
};
