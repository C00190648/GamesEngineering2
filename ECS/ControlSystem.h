#pragma once

#pragma once

#include "Entity.h"

class ControlSystem
{
	vector<Entity> entities;

public:
	void addEntity(Entity e) { /* TBI */ }
	void update() {
		cout << "ControlSystem Update" << endl;
		/* Loop through Entities with */
		/* HealthComponents and Update */
		/* TBI */
	}
};