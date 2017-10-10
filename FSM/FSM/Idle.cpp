#include "Idle.h"



void Idle::jumping(Animation* a)
{
	std::cout << "jumping" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::moveRight(Animation* a)
{
	std::cout << "moving right" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}


void Idle::moveLeft(Animation* a)
{
	std::cout << "moving Left" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
