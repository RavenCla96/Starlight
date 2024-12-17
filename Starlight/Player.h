// Header file for the Player class

#pragma once

#include "BaseClass.h"

#include <string>

class Player {
public:
	// Default Constructor
	Player() { 
		name = "Default";
		playerClass = BaseClass();
	}

	// Overloaded Constructor
	Player(std::string newName, BaseClass newClass) {
		name = newName;
		playerClass = newClass;
	}

	// Setters
	void setName(std::string newName) { name = newName; }
	void setClass(BaseClass newClass) { playerClass = newClass; }

	// Getters
	auto getName() const { return name; }
	auto getPlayerClass() const { return playerClass; }

private:
	std::string name;
	BaseClass playerClass;
};