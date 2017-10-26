#pragma once


#include "Component.h"

class PositionComponent : public Component
{
public:
	PositionComponent() : x(100), y(100) {}
	/* Data Only */
	int getXPos() { return x; }
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
private:
	int x;
	int y;
};