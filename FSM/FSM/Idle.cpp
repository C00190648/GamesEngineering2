#include "Idle.h"
#include "MoveRight.h"


void Idle::jumping(Animation* a)
{
	//std::cout << "jumping" << std::endl;
	a->setCurrent(new Idle());
	a->srcrect = { (int)a->sprite * 260, 975, 270, 300 };
	a->frames = 10;
	delete this;
}

void Idle::moveRight(Animation* a)
{
	//std::cout << "moving right" << std::endl;
	a->setCurrent(new Idle());
	a->srcrect = {(int)a->sprite * 260, 2500, 260, 260 };
	a->frames = 8;
	delete this;
}


void Idle::moveLeft(Animation* a)
{
	//std::cout << "moving Left" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::idle(Animation* a)
{
	//std::cout << "going from moving right to Idle" << std::endl;
	a->srcrect = { (int)a->sprite * 260, 510, 260, 260 };
	a->setCurrent(new Idle());
	delete this;
}