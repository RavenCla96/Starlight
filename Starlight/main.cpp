// Launch point for Starlight (A)RPG

#include "Controller.h"
#include <iostream>

using namespace std;

int main() {
	std::cout << "-- Welcome to Starlight -- " << endl;

	Controller::menu();

	std::cout << "\nThank you for playing!" << endl;

	return 0;
}