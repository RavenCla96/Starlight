// Implementation of the Controller class and functions

#include "Controller.h"

BaseClass Controller::getPlayerClass() {
	int userInput = 0;

	while (userInput == 0) {
		std::cout << "Please select your class\n";
		std::cout << "1. Wizard\n\n";
		std::cin >> userInput;
		std::cout << "\n";

		switch (userInput) {
		case 1:
			return Wizard();
		default:
			userInput = 0;
		}
	}
	return Wizard();
}

std::string Controller::getPlayerName() {
	std::string userInput;
	std::cout << "Enter Player Name: ";

	std::cin >> userInput;

	return userInput;
}

void Controller::startGame() {
	auto playerName = getPlayerName();
	auto playerClass = getPlayerClass();

	Player newPlayer = Player(playerName, playerClass);

}