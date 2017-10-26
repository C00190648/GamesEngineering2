#pragma once


#pragma once

#include "Entity.h"

class RenderSystem
{
	vector<Entity> entities;

public:
	void addEntity(Entity e) { /* TBI */ }
	void update() {
		cout << "RenderSystem Update" << endl;
		/* Loop through Entities with */
		/* HealthComponents and Update */
		/* TBI */
	}
};