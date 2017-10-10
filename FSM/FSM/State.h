#include "Animation.h"
#include <iostream>

#ifndef STATE_H
#define STATE_H


class State
{

public:
	virtual void idle(Animation* a)
	{
		std::cout << "State Idling" << std::endl;
	}

	virtual void jumping(Animation* a)
	{
		std::cout << "State Jumping" << std::endl;
	}

	virtual void moveRight(Animation* a)
	{
		std::cout << "Move Right" << std::endl;
	}

	virtual void moveLeft(Animation* a)
	{
		std::cout << "Move Left" << std::endl;
	}


};

#endif