// Header for the Controller that manages the Starlight game

#pragma once

#include "BaseClass.h"
#include "Wizard.h"
#include "Player.h"

#include <string>
#include <iostream>

class Controller {
public:
	// Menu functions
	static void menu();
	static void displayMenuOptions();

	// Game controller functions
	static void startGame();
	static std::string getPlayerName();
	static BaseClass getPlayerClass();
	static void playLevel1(Player &player);

private:
};
