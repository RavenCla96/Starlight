// Implementation of the Controller class and functions

#include "Controller.h"
#include "Level_1.h"
#include "Combat.h"

using namespace std;

void Controller::playLevel1(Player &player) {
	// Create Level 1 obj
	Level_1 level_1{};
	int encounter = 1;

	for (auto& enemy : level_1.getEnemyList())
	{
		std::cout << " -- Encounter " << encounter << "/" << level_1.getEnemyList().size() << " --" << endl;
		Combat::battle(player, enemy);
		++encounter;
	}
}

BaseClass Controller::getPlayerClass() {
	int userInput = 0;

	while (userInput == 0) {
		std::cout << "\nPlease select your class" << endl;
		std::cout << "1. Wizard" << endl;
		std::cin >> userInput;
		std::cout << endl;

		switch (userInput) {
		case 1:
		{
			std::vector<Skill> wizardSkills{};
			wizardSkills.push_back(Skill{ "Default", "Bonk enemies with your staff", 10 });
			wizardSkills.push_back(Skill{ "Fireball", "Throw a ball of fire", 25 });
			BaseClass wizardClass{ "Wizard", 100, wizardSkills };

			return wizardClass;
		}
		default:
			userInput = 0;
		}
	}
}

std::string Controller::getPlayerName() {
	std::string userInput;
	std::cout << "\nEnter Player Name: ";

	std::cin >> userInput;

	return userInput;
}

void Controller::startGame() {
	auto playerName = getPlayerName();
	auto playerClass = getPlayerClass();

	Player player = Player(playerName, playerClass);

	// Level 1
	playLevel1(player);

}

void Controller::displayMenuOptions() {
	std::cout << "1. Start Game" << endl;
	std::cout << "2. Quit" << endl;
}

void Controller::menu() {
	int userInput = 0;

	while (!userInput) {
		displayMenuOptions();

		std::cin >> userInput;

		// Catch non int number being input
		try {
			switch (userInput) {
			case 1:
				startGame();
				break;
			case 2:
				break;
			default:
				userInput = 0;
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
				std::cout << endl;
				break;
			}
		}
		catch(std::exception e) {
			std::cout << e.what() << endl;
			menu();
		}
	}
}