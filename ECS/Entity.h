#pragma once

#include "Component.h"
#include <iostream>
#include <vector>

using namespace std;

class Entity
{
public:
	Entity();
	~Entity();

	void addComponent(Component c) { components.push_back(c); }
	void removeComponent(Component c) { /* TBI */ }
	vector<Component> getComponents() { return components; }

	
private:
	vector<Component> components;
};

Entity::Entity()
{
}

Entity::~Entity()
{
}