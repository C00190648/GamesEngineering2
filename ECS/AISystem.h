#pragma once

#include "Entity.h"

class AISystem
{
	vector<Entity> entities;

public:
	void addEntity(Entity e) { /* TBI */ }
	void update() {
		cout << "AISystem Update" << endl;
		/* Loop through Entities with */
		/* HealthComponents and Update */
		/* TBI */
	}
};
