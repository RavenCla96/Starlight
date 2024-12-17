/* Header for the BaseClass class
   Provides common data for all playable classes in Starlight */

#pragma once

#include "Skill.h"

#include <string>
#include <vector>

class BaseClass {
public:
	// Default Constructor
	BaseClass() { 
		className = "Base";
		level = 1;
		health = 0;
	}

	// Setters
	void incrementLevel() { ++level; }
	void setInitialHealth(int initialHealth) { health = initialHealth; }
	void setClassName(std::string newClassName) { className = newClassName; }
	void addSkill(Skill newSkill) {	skillList.push_back(newSkill); }

	// Getters
	auto getClassName() const { return className; }
	auto getLevel() const { return level; }
	auto getHealth() const { return health; }
	virtual std::vector<Skill> getSkills() { return skillList; }

private:
	std::string className;
	int level;
	int health;
	std::vector<Skill> skillList;
};