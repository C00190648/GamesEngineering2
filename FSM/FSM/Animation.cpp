#include "Animation.h"
#include "Idle.h"
#include "MoveRight.h"

Animation::Animation()
{
	current = new Idle();
}

Animation::~Animation()
{

}

void Animation::idle()
{
	current->idle(this);
}

void Animation::jumping()
{
	current->jumping(this);
}

void Animation::moveLeft()
{
	current->moveLeft(this);
}

void Animation::moveRight()
{
	current->moveRight(this);
}