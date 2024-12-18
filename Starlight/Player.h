// Header file for the Player class

#pragma once

#include "BaseClass.h"

#include <string>
#include <memory>

class Player {
public:
	// Default Constructor
	Player() { 
		name = "Default";
		playerClass = std::make_unique<BaseClass>(BaseClass());
	}

	// Overloaded Constructor
	Player(std::string newName, BaseClass newClass) {
		name = newName;
		playerClass = std::make_unique<BaseClass>(newClass);
	}

	// Setters
	void setName(std::string newName) { name = newName; }
	void setClass(BaseClass newClass) { playerClass = std::make_unique<BaseClass>(newClass); }

	// Getters
	auto getName() const { return name; }
	auto getPlayerClass() const { return &playerClass; }

private:
	std::string name;
	std::unique_ptr<BaseClass> playerClass;
};