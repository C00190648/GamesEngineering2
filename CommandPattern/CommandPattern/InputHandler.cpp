#include "InputHandler.h"


void InputHandler::handleInput()
{

	if (SDLK_1)
	{
		buttonX_->execute();
	}
	else if (SDLK_2)
	{
		buttonY_->execute();
	}
	else if (SDLK_3)
	{
		buttonA_->execute();
	}
	else if (SDLK_4)
	{
		buttonB_->execute();
	}
}

