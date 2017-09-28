#include "InputHandler.h"
#include <windows.h>



//void InputHandler::init()
//{
//	buttonX_ = new JumpCommand();
//}

void InputHandler::handleInput()
{


	if (GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
	{
		buttonX_->execute();
	}

	//if (SDLK_1)
	//{
	//	
	//	//buttonX_->execute();
	//}
	//else if (SDLK_2)
	//{
	//	//buttonY_->execute();
	//}
	//else if (SDLK_3)
	//{
	//	//buttonA_->execute();
	//}
	//else if (SDLK_4)
	//{
	//	//buttonB_->execute();
	//}
}

