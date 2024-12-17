// Header for the playable Wizard class

#pragma once

#include "BaseClass.h"

class Wizard : public BaseClass {
public:
	// Default Constructor
	Wizard() { 
		setInitialHealth(10);
		setClassName("Wizard");
		Skill defaultSkill = { "Default",
								"Bonk your enemies with your staff",
								5 };
		Skill fireballSkill = { "Fireball", 
								"Throw a ball of fire",
								10 };
		addSkill(defaultSkill);
		addSkill(fireballSkill);
	}	
};
