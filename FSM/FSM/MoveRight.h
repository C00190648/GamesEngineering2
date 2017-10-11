#ifndef MOVERIGHT_H
#define MOVERIGHT_H

#include "Idle.h"
#include "State.h"


class MoveRight : public State
{
public:
	MoveRight()
	{

	}
	~MoveRight()
	{

	}

	void idle(Animation* a)
	{
		std::cout << "going from moving right to Idle" << std::endl;
		a->srcrect = { (int)a->sprite * 260, 510, 260, 260 };
		a->setCurrent(new Idle());
		delete this;
	}
};

#endif