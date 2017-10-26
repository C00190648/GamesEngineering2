#pragma once

#include "Component.h"

class ControlComponent : public Component
{
public:
	ControlComponent() : left(false),right(false),up(false),down(false) {}
	/* Data Only */
	//int getHealth() { return health; }
	//void setHealth(int health) { this->health = health; }
private:
	bool left;
	bool right;
	bool up;
	bool down;
};