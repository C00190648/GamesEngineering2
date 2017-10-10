#include "Idle.h"

Idle::Idle()
{

}

Idle::~Idle()
{

}

void Idle::jumping(Animation* a)
{
	std::cout << "jumping" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

