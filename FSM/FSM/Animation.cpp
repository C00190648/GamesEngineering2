#include "Animation.h"
#include "Idle.h"

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